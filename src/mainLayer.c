#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "constants.h"
#include "mainLayer.h"
#include "game.h"
#include "healperFunc.h"
#include "fmod.h"


SDL_Color white = {0,255,255};
SDL_Texture* text = NULL;
SDL_Rect p = {
        WINDOW_WIDTH/2 -325,
        WINDOW_HEIGHT/2 -175,
        650,
        350
    };

char timerSrting[100] = "0";
int currentTime = 0, previousTime = 0, counter = 0;

void setup() {
    game_setup();
}
void process_input(SDL_Event event) {
    game_input(event);
}
void update(float delta_time) {
    game_update(delta_time);

    currentTime = SDL_GetTicks();
    if (currentTime - previousTime >= 100) {
        counter += 100;
        sprintf(timerSrting, "the time is = %d", counter);
        previousTime = currentTime;
    }
    

}
void render(SDL_Renderer *renderer, TTF_Font *font){
    text = LoadText(renderer, font, timerSrting, white);
    
    SDL_RenderCopy(renderer, text, NULL, &p);

    game_render(renderer);

    
}
