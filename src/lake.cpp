#include <GL/glut.h>
#include <cmath>
#include "scene.h"

void lake()
{
    glPushMatrix();

    // -----------------------------
    // CUERPO PRINCIPAL DEL LAGO
    // -----------------------------

    glColor3f(0.0f, 0.35f, 0.80f);

    glBegin(GL_QUADS);

        glVertex2f(-10.0f, -2.0f);
        glVertex2f( 10.0f, -2.0f);
        glVertex2f( 10.0f, -7.0f);
        glVertex2f(-10.0f, -7.0f);

    glEnd();


    // -----------------------------
    // OLAS DEL LAGO
    // -----------------------------

    glColor3f(0.70f, 0.90f, 1.0f);
    glLineWidth(2.0f);

    for (int row = 0; row < 4; row++)
    {
        float baseY = -2.7f - row * 1.0f;

        glBegin(GL_LINE_STRIP);

        for (float x = -10.0f; x <= 10.0f; x += 0.2f)
        {
            float y =
                baseY +
                0.12f * sinf(
                    1.5f * x + row
                );

            glVertex2f(x, y);
        }

        glEnd();
    }

    glPopMatrix();
}
