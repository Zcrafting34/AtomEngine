#include "../../include/graphics/Image.hpp"
#include <SDL2/SDL_error.h>
#include <iostream>



SDL_Texture* newTexture(std::string src, SDL_Renderer* render) {

    SDL_Surface* surface = IMG_Load(src.c_str());
    if (surface == NULL) {
        std::cerr<<"AtomEngine_Error: Loading image -> "<<IMG_GetError();
    }

    SDL_Texture* texture = SDL_CreateTextureFromSurface(render, surface);
    if (texture == NULL) {
        std::cerr<<"AtomEngine_Error: Creating Texture -> "<<SDL_GetError();
    }
    SDL_FreeSurface(surface);

    return texture;
}
