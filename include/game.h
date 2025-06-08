#include <SDL2/SDL.h>


void game_setup();
void game_input(SDL_Event event);
void game_update(float delta_time);
void game_render(SDL_Renderer *renderer);
