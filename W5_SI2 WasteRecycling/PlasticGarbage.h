#pragma once
#include "Garbage.h"
class PlasticGarbage :
    public Garbage
{
    std::string name;
    bool isClean;

public:
    void clean();
};

