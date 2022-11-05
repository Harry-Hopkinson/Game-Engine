#include <src/core/render/render.cpp>
#include <src/core/controller/controller.cpp>
#include <src/core/logger/logger.cpp>
#include <src/core/audio/audio.cpp>
#include <src/core/text/text.cpp>

#include <cstdlib>
#include <iostream>
#include <stdexcept>

Core::Controller controller;

int main(int argv, char** args)
{
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
    render("../images\\test.bmp", renderer);
    playSound();
    try {
        controller.run();
    } catch (const std::exception& error) {
        Logger::Log(error.what());
        return EXIT_FAILURE;
    }
    removeRender(renderer);
    return EXIT_SUCCESS;
}