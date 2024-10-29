#include "../../include/core/Atom2D.hpp"

Vector2D Atom2D::Get_Position() const {
    return this -> position;
}

Vector2D Atom2D::Get_Scale() const {
    return this -> scale;
}

int Atom2D::Get_Rotation() const {
    return this -> rotation;
}
