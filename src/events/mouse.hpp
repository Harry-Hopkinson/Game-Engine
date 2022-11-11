#include <SDL2/SDL.h>
#include <iostream>

namespace Events {
  class Mouse {
    public:
      void mouseClicked(SDL_Event event) {
        std::cout << "Mouse clicked at " << event.button.x << ", " << event.button.y << "\n";
      }
  };
}