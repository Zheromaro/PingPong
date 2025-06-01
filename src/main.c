#include <stdio.h>
#include <SDL2/SDL.h>
#include "constants.h"
#include "loopFunc.h"



SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;
int game_is_running = False;

int last_frame_time = 0;

int initialize_window(void){
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0){ 
        fprintf(stderr, "Error initializing SDL. \n");
        return False;
    }

    window = SDL_CreateWindow(
        NULL,  
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_HEIGHT,
        WINDOW_WIDTH,
        SDL_WINDOW_OPENGL
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
    

    return True;
}
void destroy_window(void){
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
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
    // FixedUpdate 
    int time_to_wait = SDL_TICKS_PASSED(SDL_GetTicks(), last_frame_time + FRAME_TARGET_TIME);
    if(time_to_wait > 0 && time_to_wait <= FRAME_TARGET_TIME)
        SDL_Delay(time_to_wait);
    
    float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f;

    last_frame_time = SDL_GetTicks();
    update(delta_time);
}
void Do_render(){
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    
    // here we start drawing our game 
    render(renderer);

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