#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void DrawCircle(int x1,int y1,int x2,int y2)
{

    putpixel(x1+x2,y1+y2,RED);
    putpixel(x1-x2,y1+y2,RED);
    putpixel(x1+x2,y1-y2,RED);
    putpixel(x1-x2,y1-y2,RED);

    putpixel(x1+y2,y1+x2,RED);
    putpixel(x1-y2,y1+x2,RED);
    putpixel(x1+y2,y1-x2,RED);
    putpixel(x1-y2,y1-x2,RED);
}

void Bresenham(int x1,int y1,int r){
   int x2=0,y2=r;
   int d=3-2*r;
   DrawCircle(x1,y1,x2,y2);
   while(y2>=x2)
   {

       x2++;
       if(d>0){
        y2--;
        d=d+4*(x2-y2)+10;
       }
       else
           d=d+4*x2+6;
       DrawCircle(x1,y1,x2,y2);
       delay(100);
   }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    cout<<"Enter point and radius :: ";
    int x,y,r;cin>>x>>y>>r;
    Bresenham(x,y,r);
    getch();
    closegraph();
    return 0;
}

