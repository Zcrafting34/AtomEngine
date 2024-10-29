#include "../../include/core/Window.hpp"
#include <SDL2/SDL_render.h>
#include <iostream>
#include <memory>
#include <vector>

Window::Window() {}

Window::Window(std::string _name, int wi, int hi) {
  this->w = wi;
  this->h = hi;
  this->name = _name;
  this->running = true;
}

/**void Window::DrawObjects(std::vector<std::shared_ptr<Sprite2D>> objects) {
    for (std::shared_ptr<Sprite2D>& spr : objects) {
        if (tex) {
            SDL_RenderCopyEx(this -> render, spr->, NULL, &dstRect, angle, &center, SDL_FLIP_NONE);

        }
    }
}
*/




void Window::Run() {
  std::cout << "Iniciando ventana...\n";

  // Inicializar SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cout << "Error al iniciar video: " << SDL_GetError() << std::endl;
    return;
  }
  // SDL_image para manejar imágenes PNG
  if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
    std::cout << "Error SDL2_image Initialization: " << IMG_GetError()
              << std::endl;
    SDL_Quit();
    return;
  }

  SDL_Window *window = SDL_CreateWindow(
      this->name.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
      this->w, this->h, SDL_WINDOW_OPENGL);


  this -> render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  if (render == NULL) {
      std::cout << "Error renderer creation";
      return;
  }
  if (window == nullptr) {
    std::cout << "Error al crear la ventana: " << SDL_GetError() << std::endl;
    IMG_Quit();
    SDL_Quit();
    return;
  }

  SDL_GLContext glContext = SDL_GL_CreateContext(window);
  if (glContext == nullptr) {
    std::cout << "Error al crear el contexto OpenGL: " << SDL_GetError()
              << std::endl;
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();
    return;
  }

  if (SDL_GL_SetSwapInterval(1) < 0) {
    std::cout << "Advertencia: No se pudo habilitar V-Sync: " << SDL_GetError()
              << std::endl;
  }
  Uint32 frameStart;
  int frameTime;

  while (running) {
    SDL_Event e;
    while (SDL_PollEvent(&e)) {

      if (e.type == SDL_QUIT) {
        running = false;
      }
    }

    SDL_GL_SwapWindow(window);
    //Esto de aqui calcula los fps
    frameTime = SDL_GetTicks() - frameStart;
    if (frameTime < FRAME_DELAY) {
        SDL_Delay(FRAME_DELAY - frameTime);
   }


  }

  SDL_GL_DeleteContext(glContext);
  SDL_DestroyWindow(window);
  IMG_Quit();
  SDL_Quit();
  std::cout << "Ventana cerrada correctamente.\n";
}
