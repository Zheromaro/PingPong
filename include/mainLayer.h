#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "fmod.h"

void setup(SDL_Renderer *renderer, TTF_Font *font, FMOD_SYSTEM *fmodSystem);
void process_input(SDL_Event event);
void update(float delta_time);
void render(SDL_Renderer *renderer, TTF_Font *font, FMOD_SYSTEM *fmodSystem);
void setdown(SDL_Renderer *renderer, TTF_Font *font, FMOD_SYSTEM *fmodSystem);
