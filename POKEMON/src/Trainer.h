#pragma once

class Trainer{
	int num = 6;
	float pos_x;
	float pos_z;
	// class pokemones **;
public:
	Trainer() :pos_x(0), pos_z(0) {}
	void setPos_x(float in) { pos_x = in; }
	void setPos_z(float in) { pos_z = in; }
	float getPos_x() { return pos_x; };
	float getPos_z() { return pos_z; };
	void render();
	void moving(unsigned char key);
};

