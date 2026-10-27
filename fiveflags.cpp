
#include <GL/gl.h>
#include <windows.h>
#include <GL/glut.h>
void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 32, -6, 6);
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2f(1, 1);
    glVertex2f(3, 1);
    glVertex2f(3, 4);
    glVertex2f(1, 4);
    glEnd();
glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255);
        glVertex2f(3, 1);
        glVertex2f(5, 1);
        glVertex2f(5, 4);
        glVertex2f(3, 4);
    glEnd();
glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(5, 1);
    glVertex2f(7, 1);
    glVertex2f(7, 4);
    glVertex2f(5, 4);
    glEnd();
glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(9, 3);
    glVertex2f(15, 3);
    glVertex2f(15, 4);
        glVertex2f(9, 4);
    glEnd();
glBegin(GL_POLYGON);
        glColor3ub(255, 0, 0);
        glVertex2f(9, 2);
        glVertex2f(15, 2);
        glVertex2f(15, 3);
        glVertex2f(9, 3);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(255, 206, 0);
        glVertex2f(9, 1);
        glVertex2f(15, 1);
        glVertex2f(15, 2);
        glVertex2f(9, 2);
    glEnd();



    glBegin(GL_POLYGON);
        glColor3ub(0, 146, 70);
        glVertex2f(9, -4);
        glVertex2f(11, -4);
        glVertex2f(11, -1);
        glVertex2f(9, -1);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255);
        glVertex2f(11, -4);
        glVertex2f(13, -4);
        glVertex2f(13, -1);
        glVertex2f(11, -1);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(205, 33, 42);
        glVertex2f(13, -4);
        glVertex2f(15, -4);
        glVertex2f(15, -1);
        glVertex2f(13, -1);
    glEnd();



    glBegin(GL_POLYGON);
        glColor3ub(165, 25, 49);
        glVertex2f(16, -1.5);
        glVertex2f(22, -1.5);
        glVertex2f(22, -1);
        glVertex2f(16, -1);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255);
        glVertex2f(16, -2);
        glVertex2f(22, -2);
        glVertex2f(22, -1.5);
        glVertex2f(16, -1.5);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(45, 42, 74);
        glVertex2f(16, -3);
        glVertex2f(22, -3);
        glVertex2f(22, -2);
        glVertex2f(16, -2);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255);
        glVertex2f(16, -3.5);
        glVertex2f(22, -3.5);
        glVertex2f(22, -3);
        glVertex2f(16, -3);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(165, 25, 49);
        glVertex2f(16, -4);
        glVertex2f(22, -4);
        glVertex2f(22, -3.5);
        glVertex2f(16, -3.5);
    glEnd();



    glBegin(GL_POLYGON);
        glColor3ub(157, 34, 53);
        glVertex2f(24, -2.2);
        glVertex2f(30, -2.2);
        glVertex2f(30, -1);
        glVertex2f(24, -1);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255);
        glVertex2f(24, -2.8);
        glVertex2f(30, -2.8);
        glVertex2f(30, -2.2);
        glVertex2f(24, -2.2);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(157, 34, 53);
        glVertex2f(24, -4);
        glVertex2f(30, -4);
        glVertex2f(30, -2.8);
        glVertex2f(24, -2.8);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(100, 100);

    glutCreateWindow("Five Country Flags");

    init();
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
