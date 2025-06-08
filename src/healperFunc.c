#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "constants.h"
#include "mainLayer.h"

// DON'T do it in update
SDL_Texture* LoadTexture(SDL_Renderer *renderer, const char *file){
    SDL_Texture* newTexture = NULL;

    SDL_Surface* loadedSurface = IMG_Load(file);
    if(loadedSurface == NULL){
        printf("Unable to load the image %s! SDL_image Error: %s\n", file, SDL_GetError());
    } else {
        newTexture = SDL_CreateTextureFromSurface(renderer, loadedSurface);

        if(newTexture == NULL)
            printf("Unable to texture from %s! SDL_image Error: %s\n", file, SDL_GetError());

        SDL_FreeSurface(loadedSurface);
    }

    return newTexture;
}