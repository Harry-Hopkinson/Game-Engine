#include <stdio.h>
#include <SDL2/SDL.h>
#include <iostream>


SDL_Window * window = SDL_CreateWindow("Rendering Textures",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1000, 800, 0);

int render(std::string renderPath)
{
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_Surface * image = SDL_LoadBMP(renderPath.c_str());
    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
    return 0;
}