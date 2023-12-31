#include "freeglut.h"
#include "Trainer.h"
#include "Town.h"
#include <math.h>
#include "Mundo.h"

Trainer Ash;
Town Madrid;
Mundo MiMundo;


void OnDraw(void); //esta funcion sera llamada para dibujar
void OnTimer(int value); //esta funcion sera llamada cuando transcurra una temporizacion
void OnKeyboardDown(unsigned char key, int x, int y); //cuando se pulse una tecla	

int main(int argc, char* argv[])
{
	//Inicializar el gestor de ventanas GLUT
	//y crear la ventana
	glutInit(&argc, argv);
	float reso_x = 1920;
	float reso_y = 1080;
	glutInitWindowSize(reso_x, reso_y);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("POKEMON");

	//habilitar luces y definir perspectiva
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(40.0, reso_x / reso_y, 0.1, 150);

	//Registrar los callbacks
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25, OnTimer, 0);//le decimos que dentro de 25ms llame 1 vez a la funcion OnTimer()
	glutKeyboardFunc(OnKeyboardDown);

	//pasarle el control a GLUT,que llamara a los callbacks
	glutMainLoop();

	return 0;
}

void OnDraw(void){
	MiMundo.dibuja();
	
}

void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{
//	//poner aqui el c�digo de teclado
//	Ash.moving();
//
//	
}

void OnTimer(int value)
{
	//poner aqui el c�digo de animacion

	//no borrar estas lineas
	glutTimerFunc(25, OnTimer, 0);
	glutPostRedisplay();
}
