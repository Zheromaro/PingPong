#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "fmod.h"
#include "fmod_common.h"
#include "healperFunc.h"
#include "constants.h"
#include "mainLayer.h"
#include "game.h"

FMOD_SOUND *music = NULL;
FMOD_CHANNEL *channel = NULL;
FMOD_BOOL state;
char soundFile[] = "assets/sound/music.mp3";

void setup(SDL_Renderer *renderer, TTF_Font *font, FMOD_SYSTEM *fmodSystem) {
    game_setup();

    FMOD_System_CreateSound(fmodSystem, soundFile, FMOD_2D | FMOD_CREATESTREAM, NULL, &music);
    FMOD_System_PlaySound(fmodSystem, music, NULL, 0, &channel);
}
void process_input(SDL_Event event) {
    game_input(event);

}
void update(float delta_time) {
    game_update(delta_time);
}
void render(SDL_Renderer *renderer, TTF_Font *font, FMOD_SYSTEM *fmodSystem){
    game_render(renderer);

    FMOD_System_Update(fmodSystem);
}

void setdown(SDL_Renderer *renderer, TTF_Font *font, FMOD_SYSTEM *fmodSystem){
    
    FMOD_Sound_Release(music);
}
