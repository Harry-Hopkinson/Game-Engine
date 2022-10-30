#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL.h>
#include <iostream>

void playSound(const char* soundPath)
{
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);

    // load the sound
    Mix_Music *backgroundSound = Mix_LoadMUS(soundPath);

    Mix_PlayMusic(backgroundSound, -1);

    Mix_FreeMusic(backgroundSound);
    Mix_CloseAudio();
}
