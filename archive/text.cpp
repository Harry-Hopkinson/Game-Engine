#include <SDL2/SDL_ttf.h>
#include <iostream>

void showText(std::string text, SDL_Renderer* renderer, Uint8 x, Uint8 y, Uint8 size, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
    TTF_Font * font = TTF_OpenFont("fonts\\arial.ttf", size);
    SDL_Color color = {r, g, b, a};
    SDL_Surface * surface = TTF_RenderText_Solid(font, text.c_str(), color);
    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_Rect rect = {x, y, surface->w, surface->h};
    SDL_RenderCopy(renderer, texture, NULL, &rect);
    SDL_FreeSurface(surface);
    SDL_DestroyTexture(texture);
    TTF_CloseFont(font);
}
