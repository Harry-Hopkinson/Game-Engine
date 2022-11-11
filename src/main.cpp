#include <src/core/controller/controller.cpp>
#include <src/core/audio/audio.cpp>
#include <src/core/text/text.cpp>
#include <src/shaders/shader.hpp>

Core::Controller controller;

int main(int argv, char** args)
{
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
    render("../images\\test.bmp", renderer);

    playSound();
    
    try {
        controller.run();
    } catch (const std::exception& error) {
        Logger::Error(error.what());
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}