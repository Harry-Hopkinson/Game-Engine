#include <stdio.h>

#include <src/core/controller/controller.hpp>
#include <src/core/controller/constants.hpp>
#include <src/events/keyboard.hpp>
#include <src/events/mouse.hpp>
#include <src/core/render/render.cpp>


namespace Core {
    void Controller::run() {
      Keyboard keyboard;
      Events::Mouse mouse;
      while (!quit) {
          SDL_WaitEvent(&event);
            switch (event.type) {
                case SDL_QUIT:
                    quit = true;
                    break;
                case SDL_KEYDOWN:
                    keyboard.keyPressed(event);
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    mouse.mouseClicked(event);
                    break;
            }
      }
      SDL_Quit();
}}