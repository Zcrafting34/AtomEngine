#pragma once
//#include "Scene.hpp"
/**

Solucionar el bug de la importacion circular en el scene
*/

#include <memory>
#include <string>
#include <vector>
#ifndef BASE_ATOM_HPP
#define BASE_ATOM_HPP

class BaseAtom {
    protected:
        std::string name;
        bool pause;
        std::vector<std::shared_ptr<BaseAtom>> childs;

        BaseAtom* parent = nullptr;
    public:
        BaseAtom();
        explicit BaseAtom(std::string _name);
        virtual void process();
        virtual void addChild(BaseAtom child);
        virtual void getParent();
};

#endif
