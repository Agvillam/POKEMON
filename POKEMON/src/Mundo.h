#pragma once
#include "Town.h"

class Mundo{
	int num_ciu = 0;
	Town** cities;
public:
	Mundo() {
		for (int i = 0;i < num_ciu;i++) {
			cities[i] = new Town;
		}
	}
	void operator += (Town a) {
		num_ciu++;
		cities[num_ciu] = &a;
	}
	void dibuja();
};

