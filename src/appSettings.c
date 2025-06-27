#include <stddef.h>
#include "constants.h"

int *pGameIsRunning = NULL;
int *pReloadGame = NULL;

void AppSettingInit(int *gameIsRunning ,int *reloadGame){
    pGameIsRunning = gameIsRunning;
    pReloadGame = reloadGame;
}

void AppSettingRelease(int *gameIsRunning ,int *reloadGame){
    pGameIsRunning = NULL;
    pReloadGame = NULL;
}

void CloseGame(){
    *pGameIsRunning = False;
}

void ReloadGame(){
    *pReloadGame = True;
}