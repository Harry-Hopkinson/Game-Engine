#include <stdio.h>
#include <iostream>

#include <src/core/window/constants.hpp>

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

int removeRender(SDL_Renderer* renderer)
{
    SDL_DestroyRenderer(renderer);
    renderer = NULL;
    delete renderer;
    return 0;
}