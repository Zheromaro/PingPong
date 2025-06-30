#include <stddef.h>
#include <stdio.h>
#include <fmod.h>
#include <fmod_errors.h>
#include <fmod_common.h>
#include "audio.h"
#include "constants.h"

FMOD_SYSTEM *fmodSystem = NULL;
FMOD_CHANNEL *channel = NULL;
FMOD_SOUND *music = NULL;
FMOD_BOOL state = 0;
FMOD_RESULT result = 1;

int audioInit() {
    result = FMOD_System_Create(&fmodSystem, FMOD_VERSION);
    if(result != FMOD_OK){
        printf("FMOD could not creat System! FMOD Error: %s\n", FMOD_ErrorString(result));
        return False;
    }

    result = FMOD_System_Init(fmodSystem, 2, FMOD_INIT_NORMAL, NULL);  
    if(result != FMOD_OK){
        printf("FMOD could not be initialized! FMOD Error: %s\n", FMOD_ErrorString(result));
        return False;
    }
}
void audioUpdate(){
    FMOD_System_Update(fmodSystem);
}

void audioRelease(){
    
    audioPauseSound();
    FMOD_Sound_Release(music);

    FMOD_System_Close(fmodSystem);
    FMOD_System_Release(fmodSystem);
}

// for High level code

void audioPlaySound(char soundFile[]){
    audioPauseSound();
    FMOD_Sound_Release(music);
    FMOD_System_CreateSound(fmodSystem, soundFile, FMOD_2D | FMOD_CREATESTREAM | FMOD_DEFAULT | FMOD_LOOP_NORMAL, NULL, &music);
    FMOD_System_PlaySound(fmodSystem, music, NULL, 0, &channel);
}

void audioPauseSound(){
    FMOD_Channel_GetPaused(channel, &state);
    if (state != 1) // if the music is not paused
        FMOD_Channel_SetPaused(channel, 1); // We pause it
}

void audioUnpauseSound(){
    FMOD_Channel_GetPaused(channel, &state);
    if (state == 1) // if the music is paused
        FMOD_Channel_SetPaused(channel, 0); // We play it
}