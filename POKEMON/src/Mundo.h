#pragma once
#include "Town.h"
#include "ETSIDI.h"

class Mundo{
	enum Escenarios { INTRO, MADRID, BARCELONA };
	Escenarios escenario;

public:
	Mundo() :escenario(INTRO) {};
	void dibuja();
	void Imagen(char* imagen );
	void setScene(Escenarios a) {
		switch (a){
		case Mundo::INTRO:
			escenario = INTRO;
			break;
		case Mundo::MADRID:
			escenario = MADRID;
			break;
		case Mundo::BARCELONA:
			escenario = BARCELONA;
			break;
		default:
			break;
		}
	}


};

