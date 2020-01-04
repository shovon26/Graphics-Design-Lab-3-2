#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void Mid_Point(int xc,int yc,int r)
{
    int x=0,y=r;
    int dp=1-r;
    while(y>x){
        putpixel(xc+x,yc+y,RED);
        putpixel(xc-y,yc-x,RED);
        putpixel(xc+y,yc-x,RED);
        putpixel(xc-y,yc+x,RED);
        putpixel(xc+y,yc+x,RED);
        putpixel(xc-x,yc-y,RED);
        putpixel(xc+x,yc-y,RED);
        putpixel(xc-x,yc+y,RED);
        x++;

        if(dp<0){
            dp=dp+2*x+1;
        }
        else{
            y--;
            dp=dp+2*(x-y)+1;
        }
        delay(50);
    }
}
int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    cout<<"Enter point and radius :: ";
    int x,y,r;cin>>x>>y>>r;
    Mid_Point(x,y,r);
    getch();
    closegraph();
    return 0;
}
