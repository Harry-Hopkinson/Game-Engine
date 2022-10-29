#include <iostream>
#include <src/events/keyboard.hpp>
#include <src/core/controller/controller.hpp>

namespace Events {
  class Keyboard {
    const Uint8 *state = SDL_GetKeyboardState(NULL);
    void keyPressed(int key) {
      
    }
    ~Keyboard() {
      delete state;
    }
  };
}