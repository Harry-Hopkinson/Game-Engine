#include <SDL2/SDL.h>
#include <src/core/logger/logger.hpp>

class Keyboard {
   void keyPressed(SDL_Event event) {
      Logger::Log(SDL_GetKeyName(event.key.keysym.sym));
 };
};
