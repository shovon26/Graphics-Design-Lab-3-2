#include<bits/stdc++.h>
#include<time.h>
#include <windows.h>
#include <GL/glut.h>
#define pi acos(-1.0)
using namespace std;
void init()
{
    glClearColor(0,0,0,0);
    gluOrtho2D(-100,100,-100,100);
}

void circle(int xx)
{
    glColor3f(1,0,0);
    float x,y;
    glBegin(GL_POLYGON);
    glPointSize(2);
    for(int i=0; i<=360; i++)
    {
        x=xx+((cos((i*pi)/180)) * 10);
        y=30+((sin((i*pi)/180)) * 10);
        glVertex2f(x,y);
    }
    glEnd();
}

void rectangle()
{
    glColor3f(1,1,0);

    glBegin(GL_LINES);
    glVertex2i(0,0);
    glVertex2i(80,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(0,0);
    glVertex2i(0,50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(80,0);
    glVertex2i(80,50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(0,50);
    glVertex2i(80,50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(0,20);
    glVertex2i(80,20);
    glEnd();

    glFlush();
}
void display()
{

    glClearColor(.5,0.5,0,1);
    for(int j=10; j<=70; j++)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        Sleep(50);
        circle(j);

     rectangle();


        glFlush();
    }
    for(int j=70; j>=10; j--)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        Sleep(50);
        circle(j);

       rectangle();

        glFlush();
    }

}

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitWindowSize(500,600);
    glutCreateWindow("Hello OpenGL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
