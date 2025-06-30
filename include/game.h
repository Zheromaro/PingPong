#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

typedef struct Object Object;
struct Object
{
    float x;
    float y;
    float width;
    float height;
};
typedef struct Dir Dir;
struct Dir
{
    float x;
    float y;
};

void Setup();
void LoopStart();
void ProcessInput(SDL_Event event);
void Update(float delta_time);
void Render(SDL_Renderer *renderer);

SDL_Rect ObjectToRect(Object obj);
SDL_bool CheckCollision(SDL_Rect a, SDL_Rect b);