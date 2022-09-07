#pragma once
#include "Garbage.h"
class PaperGarbage :
    public Garbage
{
    std::string name;
    bool isSqueezed;

public:
    void squeez();

};

