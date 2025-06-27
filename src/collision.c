#include <SDL2/SDL.h>

SDL_bool checkCollision(SDL_Rect a, SDL_Rect b) {
    SDL_Rect result;
    return SDL_IntersectRect(&a, &b, &result);
}