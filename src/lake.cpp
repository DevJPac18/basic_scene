#include <GL/glut.h>
#include "scene.h"

void lake()
{
	glColor3f(0.0f, 0.0f, 1.0f);

	glBegin(GL_QUADS);

	glVertex2f(-10, 0);
	glVertex2f(10, 0);
	glVertex2f(10, -7);
	glVertex2f(-10, -7);

	glEnd();
}

