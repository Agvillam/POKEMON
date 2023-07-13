#include "Trainer.h"
#include "freeglut.h"

void Trainer::render() {
	glTranslatef(pos_x,0,pos_z);
	glutSolidSphere(2, 2, 2);
}

void Trainer::moving(unsigned char key) {
	if (key == 'w') {pos_z += 1;}
	if (key == 's') { pos_z -= 1; }
	if (key == 'd') { pos_x += 1; }
	if (key == 'a') { pos_x -= 1; }
}
