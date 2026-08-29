#include <GL/glut.h>
#include "scene.h"

// Posición horizontal del bote
static float boatX = -7.0f;

// Velocidad del bote
static float boatSpeed = 2.0f;

// Dirección:
//  1 = derecha
// -1 = izquierda
static int boatDirection = 1;


// ------------------------------------
// CASCO DEL BOTE
// ------------------------------------
static void drawHull()
{
    glColor3f(0.45f, 0.20f, 0.05f);

    glBegin(GL_POLYGON);

        glVertex2f(-1.5f,  0.0f);
        glVertex2f( 1.5f,  0.0f);
        glVertex2f( 1.0f, -0.6f);
        glVertex2f(-1.0f, -0.6f);

    glEnd();
}

// ------------------------------------
// CABINA
// ------------------------------------
static void drawCabin()
{
    glColor3f(0.95f, 0.90f, 0.70f);

    glBegin(GL_QUADS);

        glVertex2f(-0.6f, 0.0f);
        glVertex2f( 0.6f, 0.0f);
        glVertex2f( 0.45f, 0.55f);
        glVertex2f(-0.45f, 0.55f);

    glEnd();


    // Ventana
    glColor3f(0.10f, 0.45f, 0.80f);

    glBegin(GL_QUADS);

        glVertex2f(-0.30f, 0.15f);
        glVertex2f( 0.30f, 0.15f);
        glVertex2f( 0.30f, 0.40f);
        glVertex2f(-0.30f, 0.40f);

    glEnd();
}

// ------------------------------------
// MÁSTIL Y BANDERA
// ------------------------------------
static void drawMast()
{
    glColor3f(0.20f, 0.10f, 0.05f);
    glLineWidth(4.0f);

    glBegin(GL_LINES);

        glVertex2f(0.0f, 0.55f);
        glVertex2f(0.0f, 1.5f);

    glEnd();


    glColor3f(1.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLES);

        glVertex2f(0.0f, 1.5f);
        glVertex2f(0.7f, 1.25f);
        glVertex2f(0.0f, 1.05f);

    glEnd();
}

// ------------------------------------
// BOTE COMPLETO
// ------------------------------------
void boat()
{
    glPushMatrix();

    // Traslación horizontal
    glTranslatef(boatX, -1.7f, 0.0f);

    // Escala del bote
    glScalef(0.8f, 0.8f, 1.0f);

    drawHull();
    drawCabin();
    drawMast();

    glPopMatrix();
}

// ------------------------------------
// ACTUALIZAR MOVIMIENTO
// ------------------------------------
void updateBoat(float deltaTime)
{
    boatX += boatSpeed * boatDirection * deltaTime;

    // Límite derecho
    if (boatX >= 7.0f)
    {
        boatX = 7.0f;
        boatDirection = -1;
    }

    // Límite izquierdo
    if (boatX <= -7.0f)
    {
        boatX = -7.0f;
        boatDirection = 1;
    }
}
