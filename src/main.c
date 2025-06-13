#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "constants.h"
#include "mainLayer.h"
#include "fmod.h"

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;
TTF_Font *font = NULL;
int game_is_running = False;
FMOD_SYSTEM *fmodSystem = NULL;


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
    
    int imgFlags = IMG_INIT_PNG;
    if(!(IMG_Init(imgFlags) & imgFlags)){
        printf("SDL_image could not be initialized! SDL_image Error: %s\n", IMG_GetError());
        return False;
    }

    if(TTF_Init() == -1){
        printf("SDL_ttf could not be initialized! SDL_ttf Error : %s\n", TTF_GetError());
        return False;
    }
    
    font = TTF_OpenFont("assets/font/maxigo.ttf", FONTSIZE);
    if (font == NULL){
        printf("could not load Font! SDL_ttf Error : %s\n", TTF_GetError());
    }
    TTF_SetFontStyle(font, TTF_STYLE_UNDERLINE);


    FMOD_System_Create(&fmodSystem, FMOD_VERSION);
    FMOD_System_Init(fmodSystem, 2, FMOD_INIT_NORMAL, NULL);    

    return True;
}
void destroy_window(void){
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    IMG_Quit();
    TTF_CloseFont(font); // Must be before TTF_Quit();
    TTF_Quit();

    FMOD_System_Close(fmodSystem);
    FMOD_System_Release(fmodSystem);
}


void Do_setup(){
    setup();
}
void Do_process_input(){
    SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type)
    {
        case SDL_QUIT:
            game_is_running = False;
            break;
        case SDL_KEYDOWN:
            if(event.key.keysym.sym == SDLK_ESCAPE)
                game_is_running = False;
            break;
    
    }
    process_input(event);
}
void Do_update(){
    int time_to_wait = SDL_TICKS_PASSED(SDL_GetTicks(), last_frame_time + FRAME_TARGET_TIME);
    if (time_to_wait > 0 && time_to_wait <= FRAME_TARGET_TIME)
        SDL_Delay(time_to_wait);
    
    float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f;

    last_frame_time = SDL_GetTicks();
    update(delta_time);
}
void Do_render(){
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    
    // here we start drawing our game 
    render(renderer, font);

    SDL_RenderPresent(renderer);
}

 
int main(){
    game_is_running = initialize_window();

    Do_setup();

    while (game_is_running)
    {
        Do_process_input();
        Do_update();
        Do_render();
    }
    
    destroy_window();
    return 0;
}