#ifndef ATOM_2D_HPP
#define ATOM_2D_HPP
#include "BaseAtom.hpp"
#include "../math/Vector2D.h"
#include <SDL2/SDL_rect.h>
#include <string>

class Atom2D : public BaseAtom {
    protected:
        Vector2D position = {0,0};
        Vector2D scale = {1,1};
        int rotation = 0;
        SDL_Point pivot = {0,0};

    public:
        Atom2D();
        Atom2D(std::string name) : BaseAtom(name) {};

        //Transform
        void Set_Position(int x, int y);
        void Set_Scale(int x, int y);
        void Set_Rotation(int degres);

        Vector2D Get_Position() const;
        Vector2D Get_Scale() const;
        int Get_Rotation() const;
};

#endif
