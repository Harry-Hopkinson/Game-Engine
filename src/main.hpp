#include <SDL2/SDL.h>

SDL_Window * window = SDL_CreateWindow("Game Engine",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1000, 800, 0);
SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);