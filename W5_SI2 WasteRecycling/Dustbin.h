#pragma once
#include "Garbage.h"
#include "PaperGarbage.h"
#include "PlasticGarbage.h"

class Dustbin
{
public:
	std::string color;
	PaperGarbage paperContent[10];
	PlasticGarbage plasticContent[5];
	Garbage HouseWasteContent[5];

	Dustbin();
	void setGarbage(Garbage obj, int);
	void setPaperGarbage(Garbage obj, int);
	void setPlasticGarbage(Garbage obj, int);
	void throwOutGarbage(Garbage waste);
	void throwOutPaperGarbage(PaperGarbage paperWaste);
	void throwOutPlasticGarbage(PlasticGarbage plasticWaste);
	void emptyContents();
};

