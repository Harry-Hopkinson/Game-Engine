#include <iostream>
#include <SDL2/SDL.h>

namespace Events {
  class Keyboard {
    void keyPressed(SDL_Event event) {
        std::cout << SDL_GetKeyName(event) << std::endl;
      }
  };
}