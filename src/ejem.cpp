#include <iostream>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) < 0) {
        std::cout << "Error SDL2 Initialization : " << SDL_GetError();
        return 1;
    }

    if (IMG_Init(IMG_INIT_PNG) == 0) {
        std::cout << "Error SDL2_image Initialization";
        return 2;
    }

    SDL_Window* window = SDL_CreateWindow("First program", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL);
    if (window == NULL) {
        std::cout << "Error window creation";
        return 3;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        std::cout << "Error renderer creation";
        return 4;
    }

    SDL_Surface* lettuce_sur = IMG_Load("../src/Goku.png");
    if (lettuce_sur == NULL) {
        std::cout << "Error loading image: " << IMG_GetError();
        return 5;
    }

    SDL_Texture* lettuce_tex = SDL_CreateTextureFromSurface(renderer, lettuce_sur);
    if (lettuce_tex == NULL) {
        std::cout << "Error creating texture";
        return 6;
    }

    SDL_FreeSurface(lettuce_sur);

    // Variables para rotación, escala y movimiento
    float angle = 0.0f; // Ángulo de rotación
    float scale = 1.0f; // Escala de la imagen
    SDL_Point center = { 0, 0 }; // Centro de rotación (puedes cambiarlo)

    SDL_Rect dstRect = { 100, 100, 200, 200 }; // Posición y tamaño de la imagen

    bool running = true;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                running = false;
            }
        }

        // Aquí podrías ajustar el ángulo, la escala y la posición según las entradas del usuario
        angle += 1.0f; // Incrementa el ángulo para rotar
        scale = 1.5f;  // Puedes ajustar la escala aquí
        dstRect.w = 200 * scale; // Ajusta el ancho según la escala
        dstRect.h = 200 * scale; // Ajusta el alto según la escala

        SDL_RenderClear(renderer);

        // Renderiza la textura con rotación, escala y movimiento
        SDL_RenderCopyEx(renderer, lettuce_tex, NULL, &dstRect, angle, &center, SDL_FLIP_NONE);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyTexture(lettuce_tex);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();

    return 0;
}
