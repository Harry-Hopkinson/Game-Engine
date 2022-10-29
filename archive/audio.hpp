#include <SDL2/SDL.h>

namespace Core {
  class Audio {
    public:
      void init() {
        SDL_Init(SDL_INIT_AUDIO);
      }
      void quit() {
        SDL_QuitSubSystem(SDL_INIT_AUDIO);
      }
      void playMusic(const char* path) {
      }
  };
}