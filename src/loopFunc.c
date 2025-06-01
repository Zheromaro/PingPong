#include "loopFunc.h"

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


void setup() {
    ball.x = 20;
    ball.y = 20;
    ball.width = 15;
    ball.height = 15;

    dir.x = 0;
    dir.y = 0;
}
void process_input(SDL_Event event) {
    switch (event.type)
    {
    case SDL_KEYDOWN:
        switch (event.key.keysym.sym)
        {
        case SDLK_w:
            dir.y = -1;
            break;
        
        case SDLK_s:
            dir.y = 1;
            break;
            
        case SDLK_d:
            dir.x = 1;
            break;
            
        case SDLK_a:
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
    }
}
void update(float delta_time) {
    ball.x += dir.x;
    ball.y += dir.y;
}
void render(SDL_Renderer *renderer) {
    SDL_Rect ball_rect = {
        ball.x, 
        ball.y, 
        ball.width, 
        ball.height
    };

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &ball_rect);

}
