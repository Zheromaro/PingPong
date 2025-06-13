#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

SDL_Texture* LoadText(SDL_Renderer *renderer, TTF_Font *font, const char *text, SDL_Color color);
SDL_Texture* LoadTexture(SDL_Renderer *renderer, const char *file);
