#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>


int imageInit(SDL_Renderer *renderer);
void imageRelease();
SDL_Texture* LoadTexture(const char *file);
SDL_Texture* SurfaceToTexture(SDL_Surface *surface);