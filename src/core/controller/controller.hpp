#include <SDL2/SDL.h>

namespace Core {
  class Controller {
  public:
    void run();
    bool quit = false;
  };
}