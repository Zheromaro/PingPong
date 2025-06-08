#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "constants.h"
#include "mainLayer.h"
#include "game.h"

void setup() {
    game_setup();
}
void process_input(SDL_Event event) {
    game_input(event);
}
void update(float delta_time) {
    game_update(delta_time);
}
void render(SDL_Renderer *renderer) {
    game_render(renderer);
}
