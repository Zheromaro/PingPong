#include <SDL2/SDL.h>
#include "image.h"
#include "audio.h"
#include "text.h"
#include "appSettings.h"
#include "game.h"
#include "constants.h"

struct Dir
{
    float x;
    float y;
};
Dir ballDir = {0,0};
Dir playerLDir = {0,0};
Dir playerRDir = {0,0};

struct Object
{
    float x;
    float y;
    float width;
    float height;
};
Object ball;
Object playerL;
Object playerR;

int ballSpeed = 100;
int playerSpeed = 200;

SDL_Texture* ballTexture = NULL;
SDL_Texture* counterTexture = NULL;
SDL_Rect ballRect = {0, 0, 0, 0};
SDL_Rect playerLRect = {0, 0, 0, 0};
SDL_Rect playerRRect = {0, 0, 0, 0};
SDL_Rect counterRect = {60, 20, 50, 50};

char soundFile[] = "assets/sound/music.mp3";

void setup() {
    audioPlaySound(soundFile);
    ballTexture = LoadTexture("./assets/img/smart.png");
    counterTexture = TextTextureBlended("0");

    ball.width = 30;
    ball.height = 30;
    ball.x = WINDOW_WIDTH/2 - ball.width/2;
    ball.y = WINDOW_HEIGHT/2 - ball.height/2;
    
    playerL.width = 20;
    playerL.height = 50;
    playerL.x = 10;
    playerL.y = WINDOW_HEIGHT/2 - playerL.height/2;
    
    playerR.width = 20;
    playerR.height = 50;
    playerR.x = WINDOW_WIDTH - playerR.width - 10 ;
    playerR.y = WINDOW_HEIGHT/2 - playerR.height/2;

    ballDir.x = 1;
    ballDir.y = 1;

}
void process_input(SDL_Event event) {  
    switch (event.type)
    {
    case SDL_QUIT:
        CloseGame();
        break;
    case SDL_KEYDOWN:
        switch (event.key.keysym.sym)
        {
        case SDLK_ESCAPE:
            CloseGame();
            break;
        case SDLK_r:
            ReloadGame();
            break;

        case SDLK_w:
            playerLDir.y = -1;
            break;
        case SDLK_s:
            playerLDir.y = 1;
            break;
        case SDLK_UP:
            playerRDir.y = -1;
            break;
        case SDLK_DOWN:
            playerRDir.y = 1;
            break;
            
        }
    break;
    case SDL_KEYUP:
        switch (event.key.keysym.sym)
        {
        case SDLK_w:
            playerLDir.y = 0;
            break;
        
        case SDLK_s:
            playerLDir.y = 0;
            break;
        
        case SDLK_UP:
            playerRDir.y = 0;
            break;
        
        case SDLK_DOWN:
            playerRDir.y = 0;
            break;
        }
    break;
    }

}
void update(float delta_time) {
    if (ball.x > (WINDOW_WIDTH - ball.width))
        ballDir.x = -1;
    else if (ball.x < 0)
        ballDir.x = 1;

    if (ball.y > (WINDOW_HEIGHT - ball.height))
        ballDir.y = -1;
    else if (ball.y < 0)
        ballDir.y = 1;

    ball.x += ballDir.x * ballSpeed * delta_time;
    ball.y += ballDir.y * ballSpeed * delta_time;

    playerL.x += playerLDir.x * playerSpeed * delta_time;
    playerL.y += playerLDir.y * playerSpeed * delta_time;
    playerR.x += playerRDir.x * playerSpeed * delta_time;
    playerR.y += playerRDir.y * playerSpeed * delta_time;
}
void render(SDL_Renderer *renderer) {
    ballRect = ObjectToRect(ball);
    playerRRect = ObjectToRect(playerR);
    playerLRect = ObjectToRect(playerL);
    
    
    SDL_RenderCopy(renderer, ballTexture, NULL, &ballRect);
    SDL_RenderCopy(renderer, counterTexture, NULL, &counterRect);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &playerLRect);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &playerRRect);
}
void setdown() {
    
}


SDL_Rect ObjectToRect(Object obj){
    SDL_Rect rect = {0, 0, 0, 0};
    rect.x = obj.x; 
    rect.y = obj.y;
    rect.w = obj.width;
    rect.h = obj.height;
    return rect;
}
SDL_bool checkCollision(SDL_Rect a, SDL_Rect b) {
    SDL_Rect result;
    return SDL_IntersectRect(&a, &b, &result);
}