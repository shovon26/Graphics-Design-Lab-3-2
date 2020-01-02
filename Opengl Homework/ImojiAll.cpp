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
    glPointSize(2);
    for(i=0; i<=360; i++) {
        x=40+((cos((i*pi)/180)) * 22);
        y=60+((sin((i*pi)/180)) * 22);
        glVertex2f(x,y);
    }
    glEnd();

     glPointSize(2);
    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=32.5+((cos((i*pi)/180)) * 3);
        y=67.5+((sin((i*pi)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }
     glPointSize(2);
    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=47.5+((cos((i*pi)/180)) * 3);
        y=67.5+((sin((i*pi)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }
     glPointSize(2);
    for(i=205; i<335; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=40+(cos((2*i*pi)/360) * 10);
        y=60+(sin((2*i*pi)/360) * 10);
        glVertex2f(x,y);
        glEnd();
    }

    ///////////////////////////////


      glColor3f(1,1,0);
    glBegin(GL_POLYGON);
      glPointSize(2);
     for(i=0; i<=360; i++) {
        x=-40+((cos((i*pi)/180)) * 22);
        y=60+((sin((i*pi)/180)) * 22);
        glVertex2f(x,y);
    }
    glEnd();

    glPointSize(2);

    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=-32.5+((cos((i*pi)/180)) * 3);
        y=67.5+((sin((i*pi)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }
     glPointSize(2);
    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=-47.5+((cos((i*pi)/180)) * 3);
        y=67.5+((sin((i*pi)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }
     glPointSize(2);
    for(i=30; i<150; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=-40+(cos((2*i*pi)/360) * 10);
        y=45+(sin((2*i*pi)/360) * 10);
        glVertex2f(x,y);
        glEnd();
    }
    //////////////////

     glColor3f(1,1,0);
    glBegin(GL_POLYGON);
      glPointSize(2);
     for(i=0; i<=360; i++) {
        x=-40+((cos((i*pi)/180)) * 22);
        y=-60+((sin((i*pi)/180)) * 22);
        glVertex2f(x,y);
    }
    glEnd();

     glPointSize(2);

    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=-50.5+((cos((i*pi)/180)) * 3);
        y=-52.5+((sin((i*pi)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }
     glPointSize(2);
    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=-30.5+((cos((i*pi)/180)) * 3);
        y=-52.5+((sin((i*pi)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }
    glPointSize(2);
    for(i=22; i<159; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=-40+(cos((2*i*pi)/360) * 10);
        y=-75+(sin((2*i*pi)/360) * 10);
        glVertex2f(x,y);
        glEnd();
    }

    glColor3f(0,0,0);
    glBegin(GL_LINES);
     glPointSize(2);
    glVertex2i(-50,-72);
    glVertex2i(-30,-72);

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
