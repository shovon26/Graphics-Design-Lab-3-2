#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int wx_max,wy_max,wx_min,wy_min;
    int vx_max,vy_max,vx_min,vy_min;

    float sx,sy;
    int x,x1,x2,y,y1,y2;

    cout<<"Enter 3 Coordinate of Triagle (x,y,x1,y1,x2,y2) :: ";
    cin>>x>>y>>x1>>y1>>x2>>y2;

    cout<<"Enter Window Coordinate (xmax,ymax,xmin,ymin :: ";
    cin>>wx_max>>wy_max>>wx_min>>wy_min;
    delay(50);

    ///Draw Window
    setcolor(RED);
    rectangle(wx_min,wy_min,wx_max,wy_max);
    outtextxy(wx_min,wy_min-10,"Window");

    ///Draw Triangle
    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x,y,x2,y2);

    ///Viewport
    vx_min=300;
    vy_min=30;
    vx_max=550;
    vy_max=350;

    setcolor(BLUE);
    rectangle(vx_min,vy_min,vx_max,vy_max);
    outtextxy(vx_min,vy_min-10,"ViewPort");

    ///Calculate sx,sy;
    sx=(float)(vx_max-vx_min)/(wx_max-wx_min);
    sy=(float)(vy_max-vy_min)/(wy_max-wy_min);


    x=vx_min + (float)((x-wx_min)*sx);
    x1=vx_min + (float)((x1-wx_min)*sx);
    x2=vx_min + (float)((x1-wx_min)*sx);

    y=vy_min + (float)((y-wy_min)*sy);
    y1=vy_min + (float)((y1-wy_min)*sy);
    y2=vy_min + (float)((y2-wy_min)*sy);

    ///Draw Viewport Triangle

    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x,y,x2,y2);

    getch();
    closegraph();
    return 0;
}

//INPUT:::
//Enter 3 Coordinate of Triagle (x,y,x1,y1,x2,y2) :: 200 100
//100 80
//180 200
//Enter Window Coordinate (xmax,ymax,xmin,ymin :: 600 400 20 20
