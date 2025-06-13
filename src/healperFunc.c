#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "constants.h"
#include "healperFunc.h"

// DON'T do it in update
SDL_Texture* LoadText(SDL_Renderer *renderer, TTF_Font *font, const char *text, SDL_Color color){
    SDL_Texture* newText = NULL;

    SDL_Surface* loadedSurface = TTF_RenderText_Blended(font, text, color);
    
    if(loadedSurface == NULL){
        printf("Unable to load the text '%s'! SDL_ttf Error: %s\n", text, TTF_GetError());
    } else {
        newText = SDL_CreateTextureFromSurface(renderer, loadedSurface);

        if(newText == NULL)
            printf("Unable to texture from %s! SDL_image Error: %s\n", text, SDL_GetError());

        SDL_FreeSurface(loadedSurface);
    }

    return newText;
}

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