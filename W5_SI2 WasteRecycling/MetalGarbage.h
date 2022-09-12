#pragma once
#include "Garbage.h"
#include <vector>
#include <iostream>

class MetalGarbage
	:public Garbage
{
	bool isPinkCap;
	std::vector<MetalGarbage> metalContent;

public:
	MetalGarbage();
	bool getIsPinkCap();
	void throwOutMetalGarbage(MetalGarbage metalGarbage);
};

