#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

#define WIDTH 640
#define HEIGHT 480

int triangle()
{
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
  {
    printf("Error initializing SDL: %s\n", SDL_GetError());
    return 0;
  }

  SDL_Window* window = SDL_CreateWindow("Triangle!",
                                        SDL_WINDOWPOS_CENTERED,
                                        SDL_WINDOWPOS_CENTERED,
                                        WIDTH, HEIGHT, 0);

  Uint32 render_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
  SDL_Renderer* rend = SDL_CreateRenderer(window, -1, render_flags);
  if (!rend)
  {
    printf("Error creating renderer: %s\n", SDL_GetError());
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
  }

  if (window) {
    bool running = true;
    SDL_Event event;
    while (running) {
      while (SDL_PollEvent(&event)) {
        switch (event.type) {
          case SDL_QUIT:
            running = false;
            break;
        }
      }
      // draw a big triangle isoceles at the center
      // and fill it with the colour red
      SDL_SetRenderDrawColor(rend, 255, 0, 0, 255);
      SDL_RenderDrawLine(rend, WIDTH/2, 0, 0, HEIGHT);
      SDL_RenderDrawLine(rend, WIDTH/2, 0, WIDTH, HEIGHT);
      SDL_RenderPresent(rend);
    }
  }
  else {
    printf("Error creating window: %s\n", SDL_GetError());
    SDL_Quit();
    return 0;
  }
}