#include <SDL2/SDL.h>

void setup();
void process_input(SDL_Event event);
void update(float delta_time);
void render(SDL_Renderer *renderer);