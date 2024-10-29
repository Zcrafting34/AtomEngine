#pragma once
//#include "Sprite2D.hpp"
#include <SDL2/SDL_render.h>
#include <memory>
#include <vector>
#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <SDL2/SDL.h>
#include <string>
#include <SDL2/SDL_image.h>

class Window {

    private:
        int w = 0;
        int h = 0;
        std::string name;
        bool running;
        const int TARGET_FPS = 60;
        const int FRAME_DELAY = 1000 / TARGET_FPS;
        SDL_Renderer* render = NULL;

    public:
        Window();
        /**
         * Crea una ventana basica con SDL y OPENGL
         * @param name para el nombre de la ventana
         */
        Window(std::string _name, int wi, int hi);
        void Run();
        void DrawObjects(std::vector<std::shared_ptr<Sprite2D>> objects);
};

#endif
