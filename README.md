# Atom-Engine

Motor de renderizado grafico con OpenGL

# Contribuciones

Este es un proyecto pequeño desarrollado en nuestro tiempo libre. Cualquier tipo de ayuda es bienvenida y apreciada:

    Ideas y sugerencias: ¿Tienes una idea para mejorar el motor? ¡Compártela!

    Reporte de bugs: Si encuentras algún problema, háznoslo saber

    Pull requests: Si quieres agregar una funcionalidad o arreglar algo

    Estrellas: Si te gusta el proyecto, dale una estrella al repositorio

Todas las contribuciones, por pequeñas que sean, ayudan a que el motor siga creciendo y mejorando.

## Compilacion

### Linux (Arch)
```bash
sudo pacman -S glfw glew glm cmake gcc
git clone https://github.com/tu-usuario/Atom-Engine.git
cd Atom-Engine
mkdir build && cd build
cmake ..
make -j$(nproc)

Linux (Ubuntu/Debian)
bash

sudo apt install libglfw3-dev libglew-dev libglm-dev cmake g++
mkdir build && cd build
cmake ..
make

Windows

    Instalar MSYS2 o WSL2

    Instalar MinGW o usar Visual Studio con CMake

    Seguir los mismos pasos que en Linux

macOS
bash

brew install glfw glew glm cmake
mkdir build && cd build
cmake ..
make

Uso basico
cpp

#include "AtomEngine.hpp"

class MiJuego : public AtomEngine::GameObject {
    // Implementar tu juego aqui
};

int main() {
    AtomEngine::Game juego("Mi Juego", 800, 600);
    MiJuego escena;
    juego.Run(&escena);
    return 0;
}

Caracteristicas

    Renderizado 2D con sprites

    Sistema de texturas con soporte para PNG/JPG

    Shaders GLSL

    Sistema de debug integrado

    Fisicas basicas (gravedad, velocidad)

    Sistema de jerarquia de objetos

Estructura del proyecto
text

src/
├── Core/         # Nucleo del motor
├── Graphics/     # Renderizado OpenGL
├── Math/         # Matematicas
└── Utils/        # Utilidades varias

Dependencias

    OpenGL 3.3+

    GLFW

    GLEW

    GLM

    stb_image

Licencia

MIT License - Ver el archivo LICENSE para detalles.

Si encuentras bugs o quieres contribuir, abre un issue o pull request.

