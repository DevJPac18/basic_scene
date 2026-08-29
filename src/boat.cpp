#include <GL/glut.h>
#include "scene.h"

void boat()
{
	glColor3f(0.0f, 1.0f, 0.0f);

	glBegin(GL_QUADS);

	glVertex2f(-1, -2);
	glVertex2f(1, -2);
	glVertex2f(1, -3);
	glVertex2f(-1, -3);

	glEnd();
}
