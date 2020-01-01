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
    glClear(GL_COLOR_BUFFER_BIT);
    float x,y;
    glColor3f(1,.6,0);
    glPointSize(2);
    for(int i=0;i<360;i++){
        glBegin(GL_POINTS);
        x=0+cos((pi*i)/180)*35;
        y=0+sin((pi*i)/180)*35;
        glVertex2f(x,y);
        glEnd();
    }

    for(int i=45;i<135;i++){
        glBegin(GL_POINTS);
        x=0+cos((i*pi)/180)*22;
        y=-39+sin((i*pi)/180)*22;
        glVertex2f(x,y);
        glEnd();
    }

      for(int i=0;i<360;i++){
        glBegin(GL_POINTS);
        x=-17+cos((pi*i)/180)*3;
        y=12+sin((pi*i)/180)*3;
        glVertex2f(x,y);
        glEnd();
    }

      for(int i=0;i<360;i++){
        glBegin(GL_POINTS);
        x=17+cos((pi*i)/180)*3;
        y=12+sin((pi*i)/180)*3;
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
