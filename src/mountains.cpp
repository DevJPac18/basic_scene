#include <GL/glut.h>
#include "scene.h"

void mountains()
{
	glColor3f(0.2f, 0.5f, 0.0f);

	// TODO: create mountains
	glBegin(GL_TRIANGLES);

	glVertex2f(-10, 0);
	glVertex2f(0, 7);
	glVertex2f(10, 0);

	glEnd();
}
