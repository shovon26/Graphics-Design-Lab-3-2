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

    int i;
    float x,y,theta;
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);

    for(i=0; i<=360; i++) {
        x=40+((cos((i*pi)/180)) * 20);
        y=60+((sin((i*pi)/180)) * 20);
        glVertex2f(x,y);
    }
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_LINES);

    glVertex2i(40,40);
    glVertex2i(40,-40);

    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_LINES);

    glVertex2i(40,25);
    glVertex2i(70,15);

    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_LINES);

    glVertex2i(40,25);
    glVertex2i(10,15);

    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_LINES);

    glVertex2i(40,-40);
    glVertex2i(70,-55);

    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_LINES);

    glVertex2i(40,-40);
    glVertex2i(10,-55);

    glEnd();

    for(i=0; i<=360; i++) {
        glColor3f(1,1,0);
        glBegin(GL_POINTS);
        x=8+((cos((i*pi)/180)) * 2);
        y=15+((sin((i*pi)/180)) * 2);
        glVertex2f(x,y);
        glEnd();
    }

    for(i=0; i<=360; i++) {
        glColor3f(1,1,0);
        glBegin(GL_POINTS);
        x=72+((cos((i*pi)/180)) * 2);
        y=15+((sin((i*pi)/180)) * 2);
        glVertex2f(x,y);
        glEnd();
    }

    for(i=0; i<=360; i++) {
        glColor3f(1,1,0);
        glBegin(GL_POINTS);
        x=8+((cos((i*pi)/180)) * 2);
        y=-55+((sin((i*pi)/180)) * 2);
        glVertex2f(x,y);
        glEnd();
    }

    for(i=0; i<=360; i++) {
        glColor3f(1,1,0);
        glBegin(GL_POINTS);
        x=72+((cos((i*pi)/180)) * 2);
        y=-55+((sin((i*pi)/180)) * 2);
        glVertex2f(x,y);
        glEnd();
    }

    glColor3f(.396,.263,.129);
    glBegin(GL_LINES);

    glVertex2i(8,15);
    glVertex2i(8,80);

    glEnd();

    glColor3f(.05,.66,.08);
    glBegin(GL_QUADS);
    glVertex2i(8,80);
    glVertex2i(-42,80);

    glVertex2i(-42,80);
    glVertex2i(-42,50);

    glVertex2i(-42,50);
    glVertex2i(8,50);

    glVertex2i(8,50);
    glVertex2i(8,80);


    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);

    for(i=0; i<360; i++) {
        x=-17+((cos((i*pi)/180)) * 10);
        y=65+((sin((i*pi)/180)) * 10);
        glVertex2f(x,y);
    }
    glEnd();


    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=32.5+((cos((i*pi)/180)) * 3);
        y=67.5+((sin((i*pi)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }
    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=47.5+((cos((i*pi)/180)) * 3);
        y=67.5+((sin((i*pi)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }

    for(i=200; i<340; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=40+(cos((2*i*pi)/360) * 10);
        y=60+(sin((2*i*pi)/360) * 10);
        glVertex2f(x,y);
        glEnd();
    }
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
