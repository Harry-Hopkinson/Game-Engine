#include <SDL2/SDL.h>

namespace Events {
  class Keyboard {
    public:
      void keyPressed(int key) {};
      bool keys[SDL_NUM_SCANCODES];
      bool keysDown[SDL_NUM_SCANCODES];
      bool keysUp[SDL_NUM_SCANCODES];
  };
}