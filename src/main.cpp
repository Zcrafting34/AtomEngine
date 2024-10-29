#include "../include/core/Window.hpp"

int main(int argc, char* args[]) {

    Window* win = new Window("Game", 800, 600);
    win->Run();

    delete win;

    return 0;
}
