#include <GL/glut.h>
#include <cmath>
#include "scene.h"

void ufo(float angle)
{
	glColor3f(0.7f, 0.7f, 0.7f);

	glBegin(GL_TRIANGLES);

	glVertex2f(-1, 3);
	glVertex2f(1, 3);
	glVertex2f(0, 4);

	glEnd();
}
