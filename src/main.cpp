#include <src/core/render/render.cpp>
#include <src/core/controller/controller.cpp>
#include <src/core/logger/logger.cpp>

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main(int argv, char** args)
{
    Core::Controller controller;
    SDL_Init(SDL_INIT_VIDEO);
    render("images\\test.bmp");
    try {
        controller.run();
    } catch (const std::exception& error) {
        Logger::Log(error.what());
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}