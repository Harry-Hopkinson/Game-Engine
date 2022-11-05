#include <src/core/logger/logger.cpp>
#include <SDL2/SDL.h>

namespace Events {
  class Keyboard {
    public:
      void keyPressed(SDL_Event event) {
        Logger::Log(SDL_GetKeyName(event.key.keysym.sym));
      }
  };
}