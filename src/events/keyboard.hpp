#include <SDL2/SDL.h>
#include <iostream>

namespace Events {
  class Keyboard {
    public:
      void keyPressed(SDL_Event event) {
        std::cout << SDL_GetKeyName(event.key.keysym.sym) << std::endl;
      }
  };
}