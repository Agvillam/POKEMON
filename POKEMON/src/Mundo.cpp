#include "Mundo.h"
#include "ETSIDI.h"

void Mundo::Imagen(char* imagen)
{
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(imagen).id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 1); glVertex2f(-16, -2);
	glTexCoord2d(1, 1); glVertex2f(16, -2);
	glTexCoord2d(1, 0); glVertex2f(16, 17);
	glTexCoord2d(0, 0); glVertex2f(-16, 17);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
}

void Mundo::dibuja() {
	switch (escenario)
	{
	case Mundo::INTRO:
		if (escenario == INTRO)
		{//CODIGO PARA PINTAR UNA PANTALLA NEGRA CON LETRAS
			gluLookAt(0, 7.5, 30, // posicion del ojo
				0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
				0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
			char imagen[] = "bin/imagenes/fondo-intro.png";
			Imagen(imagen);
		}
		
		break;
	case Mundo::MADRID:
		break;
	case Mundo::BARCELONA:
		break;
	default:
		break;
	}
}

