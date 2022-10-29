#include <stdio.h>
#include <src/core/controller/controller.hpp>
#include <src/events/keyboard.hpp>
#include <src/core/controller/constants.hpp>

namespace Core {
    void Controller::run() {
        
        while (!quit) {
                SDL_WaitEvent(&event);
                switch (event.type) {
                    case SDL_QUIT:
                        quit = true;
                        break;
                }
            }
        SDL_Quit();
}}