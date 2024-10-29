#include "../../include/core/Sprite2D.hpp"
#include "../../include/graphics/Image.hpp"
#include <string>

Sprite2D::Sprite2D(std::string name, std::string src) : Atom2D(name) {
    this->dstRect = { this->position.x, this->position.y, this->scale.x, this->scale.y };
    //this->texture = newTexture(src, SDL_Renderer *render);
}
