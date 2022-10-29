#include <src/core/render/render.cpp>
#include <src/core/controller/controller.cpp>
#include <src/core/logger/logger.cpp>

#include <cstdlib>
#include <iostream>
#include <stdexcept>

Core::Controller controller;

int main(int argv, char** args)
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Init(SDL_INIT_AUDIO);
    render("images\\test.bmp");
    playSound("audio\\music.wav");
    // play the music with running the controller
    // playSound("audio\\music.wav");
    try {
        controller.run();
    } catch (const std::exception& error) {
        Logger::Log(error.what());
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}