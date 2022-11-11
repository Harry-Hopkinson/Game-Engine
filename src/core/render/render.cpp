#include <stdio.h>
#include <iostream>

#include <src/main.hpp>

int render(std::string renderPath, SDL_Renderer* renderer)
{
    SDL_Surface * image = SDL_LoadBMP(renderPath.c_str());
    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    // remove the texture and surface
    SDL_FreeSurface(image);
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    return 0;
}

// remove the image from the screen
// by making the renderer black

void clearScreen(SDL_Renderer* renderer)
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
}