#include<bits/stdc++.h>
#include <windows.h>
#include <GL/glut.h>
#define pi acos(-1.0)
using namespace std;
void init() {
    glClearColor(0,0,0,0);
    gluOrtho2D(-100,100,-100,100);
}

void display() {
    float theta;

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2i(-50,80);
    glVertex2i(50,80);

    glVertex2i(-50,80);
    glVertex2i(-50,20);

    glVertex2i(-50,20);
    glVertex2i(50,20);

    glVertex2i(50,20);
    glVertex2i(50,80);



    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);

    for(int i=0; i<360; i++) {
        theta=(i*3.1416)/180;
        glVertex2f(0+20*cos(theta),50+20*sin(theta));
    }

    glEnd();

    glColor3f(.446,.463,.429);
    glBegin(GL_QUADS);
    glVertex2i(-60,80);
    glVertex2i(-65,80);

    glVertex2i(-60,80);
    glVertex2i(-60,-80);

    glVertex2i(-65,80);
    glVertex2i(-65,-80);

    glVertex2i(-65,-80);
    glVertex2i(-60,-80);

    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_LINES);

    glVertex2i(-50,70);
    glVertex2i(-60,70);

    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_LINES);

    glVertex2i(-50,30);
    glVertex2i(-60,30);

    glEnd();


    glFlush();
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitWindowSize(500,600);
    glutCreateWindow("Hello OpenGL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
