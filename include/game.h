#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

typedef struct Object Object;
typedef struct Dir Dir;

void setup();
void process_input(SDL_Event event);
void update(float delta_time);
void render(SDL_Renderer *renderer);
void setdown();

SDL_Rect ObjectToRect(Object obj);
SDL_bool checkCollision(SDL_Rect a, SDL_Rect b);