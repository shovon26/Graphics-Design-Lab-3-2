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
    float x,y;
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);

    for(i=0; i<=360; i++) {
        x=-50+((cos((i*3.14)/180)) * 30);
        y=50+((sin((i*3.14)/180)) * 30);
        glVertex2f(x,y);
    }
    glEnd();

    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=-57.5+((cos((i*3.14)/180)) * 3);
        y=57.5+((sin((i*3.14)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }


    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=-42.5+((cos((i*3.14)/180)) * 3);
        y=57.5+((sin((i*3.14)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }

    for(i=200; i<340; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=-50+(cos((2*i*3.14)/360) * 10);
        y=50+(sin((2*i*3.14)/360) * 10);
        glVertex2f(x,y);
        glEnd();
    }


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);

    for(i=0; i<=360; i++) {
        x=50+((cos((i*3.14)/180)) * 30);
        y=50+((sin((i*3.14)/180)) * 30);
        glVertex2f(x,y);
    }
    glEnd();

    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=57.5+((cos((i*3.14)/180)) * 3);
        y=57.5+((sin((i*3.14)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }
    for(i=0; i<=360; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=42.5+((cos((i*3.14)/180)) * 3);
        y=57.5+((sin((i*3.14)/180)) * 3);
        glVertex2f(x,y);
        glEnd();
    }

    for(i=30; i<150; i++) {
        glColor3f(0,0,0);
        glBegin(GL_POINTS);
        x=50+(cos((2*i*3.14)/360) * 10);
        y=35+(sin((2*i*3.14)/360) * 10);
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
