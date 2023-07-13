#pragma once
#include "Trainer.h"
#include <string>

class Town {
protected:
	int num_enemy;
	Trainer principal;
	Trainer** enemigo;
public:
	Town() :num_enemy(6){
		for (int i=0;i < num_enemy;i++) { *enemigo = new Trainer;} }
	virtual void render() {};
	void operator + (Trainer a) { 
		principal = a;
		principal.setPos_x(0);
		principal.setPos_z(0);
	}
};

class Madrid :public Town {
	std::string nombre;
public:
	Madrid() :Town() { nombre = "MADRID"; };
	void render();

};

