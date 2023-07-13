#include "Town.h"
#include "freeglut.h"

void Madrid::render() {
	//Borrado de la pantalla	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(0.001, 10, 0,  // posicion del ojo
		principal.getPos_x(), 0.0, principal.getPos_z(),      // hacia que punto mira  (0,0,0) 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	//aqui es donde hay que poner el codigo de dibujo
	//dibujo del suelo
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);
	glVertex3f(-5.0f, 0, -5.0f);
	glColor3ub(255, 0, 255);
	glVertex3f(-5.0f, 0, 5.0f);
	glColor3ub(255, 255, 0);
	glVertex3f(5.0f, 0, 5.0f);
	glColor3ub(120, 120, 120);
	glVertex3f(5.0f, 0, -5.0f);
	glEnd();
	glEnable(GL_LIGHTING);

	//no borrar esta linea ni poner nada despues
	glutSwapBuffers();
}
