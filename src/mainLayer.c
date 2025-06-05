#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "constants.h"
#include "mainLayer.h"

SDL_Texture* LoadTexture(SDL_Renderer *renderer, const char *file);

struct ball
{
    float x;
    float y;
    float width;
    float height;
} ball;
struct dir
{
    float x;
    float y;
}dir;

int followMouse = 0;
SDL_Texture* texture = NULL;
SDL_Rect windowRect = {
    0, 
    0, 
    WINDOW_WIDTH * 2,
    WINDOW_HEIGHT * 2
};

void setup() {
    ball.width = 50;
    ball.height = 50;
    ball.x = WINDOW_WIDTH/2 - ball.width/2;
    ball.y = WINDOW_HEIGHT/2 - ball.height/2;

    dir.x = 0;
    dir.y = 0;
}
void process_input(SDL_Event event) {
    
    switch (event.type)
    {
    case SDL_KEYDOWN:
        switch (event.key.keysym.sym)
        {
        case SDLK_KP_8:
            dir.y = -1;
            break;
        
        case SDLK_KP_2:
            dir.y = 1;
            break;
            
        case SDLK_KP_6:
            dir.x = 1;
            break;
            
        case SDLK_KP_4:
            dir.x = -1;
            break;
        }
    break;
    case SDL_KEYUP:
        switch (event.key.keysym.sym)
        {
        case SDLK_w:
            dir.y = 0;
            break;
        
        case SDLK_s:
            dir.y = 0;
            break;
            
        case SDLK_d:
            dir.x = 0;
            break;
            
        case SDLK_a:
            dir.x = 0;
            break;
        }
    break;
    case SDL_MOUSEBUTTONUP:
        switch (event.button.button)
        {
        case SDL_BUTTON_RIGHT:
            ball.x = event.button.x;
            ball.y = event.button.y;
        break;
        case SDL_BUTTON_LEFT:
            if(followMouse == 0) { 
                followMouse = 1;
            } else { 
                followMouse = 0;
            }
        break;

        }
    break;
    case SDL_MOUSEMOTION:
        if(followMouse) {
            ball.x = event.motion.x;
            ball.y = event.motion.y;
        }
    break;
    }
}
void update(float delta_time) {
    ball.x += dir.x;
    ball.y += dir.y;
}
void render(SDL_Renderer *renderer) {
    SDL_Rect textureRect = {
        ball.x, 
        ball.y, 
        ball.width, 
        ball.height
    };

    if(texture == NULL)
        texture = LoadTexture(renderer,"./assets/smart.png");
    
    SDL_RenderCopy(renderer, texture, &windowRect, &textureRect);

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