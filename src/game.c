#include <SDL2/SDL.h>
#include "image.h"
#include "audio.h"
#include "text.h"
#include "appSettings.h"
#include "game.h"
#include "constants.h"

Dir ballDir = {0,0};
Dir playerLDir = {0,0};
Dir playerRDir = {0,0};
Object ball;
Object playerL;
Object playerR;
int ballSpeed = 250;
int playerSpeed = 200;
int counterWidth = 50, counterHight = 50;
int counterL = 0, counterR = 0, maxPoint = 3;
SDL_Texture* menuBackgroundTexture = NULL;
SDL_Texture* ballTexture = NULL;
SDL_Texture* counterLTexture = NULL;
SDL_Texture* counterRTexture = NULL;
SDL_Texture* losingTextTexture = NULL;
SDL_Texture* losingPlayerTextTexture = NULL;
SDL_Texture* replayTextTexture = NULL;
SDL_Rect WindowRect   = {0, 0, WINDOW_WIDTH, WINDOW_HEIGHT};
SDL_Rect ballRect     = {0, 0, 0, 0};
SDL_Rect playerLRect  = {0, 0, 0, 0};
SDL_Rect playerRRect  = {0, 0, 0, 0};
SDL_Rect counterLRect = {0, 0, 0, 0};
SDL_Rect counterRRect = {0, 0, 0, 0};
SDL_Rect losingTextRect       = {WINDOW_WIDTH/3, WINDOW_HEIGHT/10, 500, 50};
SDL_Rect losingPlayerTextRect = {WINDOW_WIDTH - (WINDOW_WIDTH/2.2), WINDOW_HEIGHT/10 + 100, 130, 60};
SDL_Rect replayTextRect       = {50, WINDOW_HEIGHT - (WINDOW_HEIGHT/10), 400, 30};
int gameEnded = 0;

char battleMusicFile[] = "assets/sound/Battle-Music.mp3";
char sadMusicFile[] = "assets/sound/Sadness-And-Sorrow.mp3";
char sfxFile[] = "assets/sound/jump.wav";
char ballImageFile[] = "assets/img/smart.png";
char menuBackgroundImageFile[] = "assets/img/menuBackground.png";

void Setup() {
    audioPlayMusic(battleMusicFile);
    menuBackgroundTexture = LoadTexture(menuBackgroundImageFile);
    ballTexture = LoadTexture(ballImageFile);
    counterLTexture = NumTextureBlended(counterL); 
    counterRTexture = NumTextureBlended(counterR);
    losingTextTexture = TextTextureBlended("you will never be forgoten");
    replayTextTexture = TextTextureBlended("to replay press [space]");

    counterLRect.w = counterWidth;
    counterLRect.h = counterHight;
    counterLRect.x = WINDOW_WIDTH/2 - counterLRect.w/2 - 120;
    counterLRect.y = 35;
    
    counterRRect.w = counterWidth;
    counterRRect.h = counterHight;
    counterRRect.x = WINDOW_WIDTH/2 - counterLRect.w/2 + 120;
    counterRRect.y = 35;
}
void LoopStart() {
    if(gameEnded == 1){
        gameEnded = 0;
        counterL = 0;
        counterR = 0;
        counterLTexture = NumTextureBlended(counterL); 
        counterRTexture = NumTextureBlended(counterR);
        audioPlayMusic(battleMusicFile);
    }
    if(counterL == maxPoint || counterR == maxPoint) {
        gameEnded = 1;
        audioPlayMusic(sadMusicFile);
        if(counterL == 3)
            losingPlayerTextTexture = TextTextureBlended("Player 2");
        else if (counterR == 3)
            losingPlayerTextTexture = TextTextureBlended("Player 1");

    }

    ball.width = 30;
    ball.height = 30;
    ball.x = WINDOW_WIDTH/2 - ball.width/2 - 300;
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
void ProcessInput(SDL_Event event) {  
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
        case SDLK_SPACE:
            if(gameEnded) {
                ReloadGame();
            }
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
void Update(float delta_time) {
    if(gameEnded) return;

    if (ball.x > (WINDOW_WIDTH - ball.width)) { 
        counterL += 1;
        counterLTexture = NumTextureBlended(counterL);
        ReloadGame();
    } else if (ball.x < 0) { 
        counterR += 1;
        counterRTexture = NumTextureBlended(counterR);
        ReloadGame();
    }

    if (ball.y > (WINDOW_HEIGHT - ball.height))
        ballDir.y = -1;
    else if (ball.y < 0)
        ballDir.y = 1;
    
    if (CheckCollision(ballRect, playerRRect)) {
        audioPlaySFX(sfxFile);
        ballDir.x = -1;
    } else if (CheckCollision(ballRect, playerLRect)) {
        audioPlaySFX(sfxFile);
        ballDir.x = 1;
    }

    ball.x += ballDir.x * ballSpeed * delta_time;
    ball.y += ballDir.y * ballSpeed * delta_time;
    playerL.x += playerLDir.x * playerSpeed * delta_time;
    playerL.y += playerLDir.y * playerSpeed * delta_time;
    playerR.x += playerRDir.x * playerSpeed * delta_time;
    playerR.y += playerRDir.y * playerSpeed * delta_time;
}
void Render(SDL_Renderer *renderer) {
    if(gameEnded) {
        SDL_RenderCopy(renderer, menuBackgroundTexture, NULL, &WindowRect);
        SDL_RenderCopy(renderer, losingTextTexture, NULL, &losingTextRect);
        SDL_RenderCopy(renderer, losingPlayerTextTexture, NULL, &losingPlayerTextRect);
        SDL_RenderCopy(renderer, replayTextTexture, NULL, &replayTextRect);
        return;
    }

    ballRect = ObjectToRect(ball);
    playerRRect = ObjectToRect(playerR);
    playerLRect = ObjectToRect(playerL);
    
    SDL_RenderCopy(renderer, ballTexture, NULL, &ballRect);
    SDL_RenderCopy(renderer, counterLTexture, NULL, &counterLRect);
    SDL_RenderCopy(renderer, counterRTexture, NULL, &counterRRect);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &playerLRect);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &playerRRect);
}

SDL_Rect ObjectToRect(Object obj) {
    SDL_Rect rect = {0, 0, 0, 0};
    rect.x = obj.x; 
    rect.y = obj.y;
    rect.w = obj.width;
    rect.h = obj.height;
    return rect;
}
SDL_bool CheckCollision(SDL_Rect a, SDL_Rect b) {
    SDL_Rect result;
    return SDL_IntersectRect(&a, &b, &result);
}
