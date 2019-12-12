/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include<windows.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
using namespace std;

void display(){
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1,1,0);
//    glBegin(GL_LINES);
////    glVertex2f(-.67,-.67);
////    glVertex2f(.67,.67);
//  ///Rectangle
//      glVertex2f(-.67,.67);
//       glVertex2f(.67,.67);
//
//       glVertex2f(-.67,-.67);
//       glVertex2f(.67,-.67);
//
//       glVertex2f(-.67,-.67);
//       glVertex2f(-.67,.67);
//
//       glVertex2f(.67,-.67);
//       glVertex2f(.67,.67);


    glClear(GL_COLOR_BUFFER_BIT);



//    glBegin(GL_POLYGON);
//    glColor3f(1,0,0);
//////    glVertex2f(-.67,-.67);
//////    glVertex2f(.67,.67);
////  ///Triangle
////   glVertex3f(0,0,0);
////   glColor3f(0,1,0);  ///300 300
////   glVertex3f(-.67,-.67,0);
////   glColor3f(0,0,1); ///100 100
////   glVertex3f(.67,-.67,0);  ///500 100
//
//   glVertex3f(-.5,-.5,0);
//   glColor3f(0,1,0);
//   glVertex3f(.5,.5,0);
//   glColor3f(0,0,1);
//   glVertex3f(-.5,.5,0);
//
//   glVertex3f(.5,-.5,0);

double radius=0.2;
const double PI=acos(-1.0);
glBegin(GL_LINE_LOOP);
for(double i=0;i<2*PI;i+=PI/10.0)
{
    glVertex2f(cos(i)*radius,sin(i)*radius);
    printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
}
    glEnd();
    glFlush();

}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Hello");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
