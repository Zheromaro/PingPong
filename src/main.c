#include <SDL2/SDL.h>
#include "audio.h"
#include "image.h"
#include "text.h"
#include "appSettings.h"
#include "constants.h"
#include "game.h"

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;
int gameIsRunning = False;
int reloadGame = False;


int last_frame_time = 0;

int initialize_window(void){
    
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) != 0){ 
        fprintf(stderr, "Error initializing SDL. \n");
        return False;
    }

    window = SDL_CreateWindow(
        NULL,  
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH,
        WINDOW_HEIGHT,
        SDL_WINDOW_RESIZABLE
    );
    if (!window){
        fprintf(stderr, "Error creating SDL Window. \n");
        return False;
    }

    renderer = SDL_CreateRenderer(window, -1, 0);
    if (!renderer)
    {
        fprintf(stderr, "Error creating SDL Renderer. \n");
        return False;
    }
    
    // other libraries
    if (imageInit(renderer) == False) return False;
    if (textInit() == False) return False;
    audioInit(); 
    AppSettingInit(&gameIsRunning, &reloadGame);

    return True;
}
void destroy_window(void){
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    // other libraries
    imageRelease();
    textRelease();
    audioRelease();
}

void Do_setup(){
    Setup();
}
void Do_loopstart(){
    LoopStart();
}
void Do_process_input(){
    SDL_Event event;
    SDL_PollEvent(&event);

    ProcessInput(event);
}
void Do_update(){
    int time_to_wait = SDL_TICKS_PASSED(SDL_GetTicks(), last_frame_time + FRAME_TARGET_TIME);
    if (time_to_wait > 0 && time_to_wait <= FRAME_TARGET_TIME)
        SDL_Delay(time_to_wait);
    
    float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f;

    last_frame_time = SDL_GetTicks();
    Update(delta_time);
}
void Do_render(){
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    
    // here we start drawing our game 
    Render(renderer);

    SDL_RenderPresent(renderer);
}

 
int main(){
    gameIsRunning = initialize_window();
    Do_setup();

    while (gameIsRunning)
    {
        Do_loopstart();
        reloadGame = False;

        while (!reloadGame && gameIsRunning)
        {
            Do_process_input();
            Do_update();
            Do_render();
            audioUpdate();
        }

    }

    destroy_window();
    return 0;
}