#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(BLUE);  ///will set color
    line(100,100,200,260); ///draw line
    circle(300,100,55);   ///draw circle
    outtextxy(300,155,"CIRCLE"); ///print any text in the window


    setcolor(RED);
    rectangle(100,100,400,300); ///draw rectangle

    int mxX = getmaxx(); ///window size in x axis
    int mxY = getmaxy();  ///window size in y axis

    cout<<mxX<<" "<<mxY<<endl;

    ///Ellipse
    int x=250,y=200;
    int start_angle = 0;
    int end_angle = 360;
    int x_rad = 100;
    int y_rad = 50;
    setcolor(RED);
    ellipse(x,y,start_angle,end_angle,x_rad,y_rad);

    getch();
    closegraph();

    return 0;
}
