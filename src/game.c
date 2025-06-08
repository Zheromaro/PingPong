#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdbool.h>
#include "constants.h"
#include "mainLayer.h"
#include "healperFunc.h"

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
int speed = 100;

int followMouse = 0;
SDL_Texture* texture = NULL;


void game_setup() {
    ball.width = 50;
    ball.height = 50;
    ball.x = WINDOW_WIDTH/2 - ball.width/2;
    ball.y = WINDOW_HEIGHT/2 - ball.height/2;

    dir.x = 1;
    dir.y = 1;
}
void game_input(SDL_Event event) {
    
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
void game_update(float delta_time) {
    if (ball.x > (WINDOW_WIDTH - ball.width))
        dir.x = -1;
    else if (ball.x < 0)
        dir.x = 1;

    if (ball.y > (WINDOW_HEIGHT - ball.height))
        dir.y = -1;
    else if (ball.y < 0)
        dir.y = 1;

    ball.x += dir.x * speed * delta_time;
    ball.y += dir.y * speed * delta_time;
}
void game_render(SDL_Renderer *renderer) {
    SDL_Rect textureRect = {
        ball.x, 
        ball.y, 
        ball.width, 
        ball.height
    };

    if(texture == NULL)
        texture = LoadTexture(renderer,"./assets/smart.png");
    
    SDL_RenderCopy(renderer, texture, NULL, &textureRect);

}
