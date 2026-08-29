#include <GL/glut.h>
#include "scene.h"

float angle = 0;

void init()
{
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10, 10, -7, 7, -1, 1);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	mountains();
	lake();
	boat();
	ufo(angle);

	glutSwapBuffers();
}

void update(int value)
{
	angle += 2;
	if (angle >= 360)
		angle = 0;

	updateBoat(0.016f);
	
	glutPostRedisplay();
	glutTimerFunc(16, update, 0);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitWindowSize(800, 600);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("PA01 - Huascaran");

	init();

	glutDisplayFunc(display);
	glutTimerFunc(30, update, 0);

	glutMainLoop();

	return 0;
}
