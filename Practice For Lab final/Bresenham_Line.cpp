#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

vector<pair<int,int> > Bresenham(int x1,int y1,int x2,int y2)
{
    vector<pair<int,int> > point;
    int dx,dy,i1,i2,d;
    dx=(x2-x1);
    dy=(y2-y1);
    i1=2*dy;
    i2=2*(dy-dx);
    d=i1-dx;
    int x,y,x_end;
    if(dx==0)
    {
        x=x1;
        y=y1;
        for(x=x1,y=y1;y<=y2;y++)
        {
            point.push_back({x,y});
        }

        return point;
    }
    if(dx<0){
        x=x2;
        y=y2;
        x_end=x1;
    }
    if(dx>0){
        x=x1;
        y=y1;
        x_end=x2;
    }
    while(x<=x_end)
    {
        point.push_back({x,y});
        if(d<0)
        {
            d+=i1;
        }
        else{
            d+=i2;
            y++;
        }
        x++;
    }
    return point;
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    cout<<"Enter x1,y1 and x2,y2 :: ";
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    vector<pair<int,int> > Point = Bresenham(x1,y1,x2,y2);

    for(int i=0;i<Point.size();i++)
    {
        int x=Point[i].first;
        int y=Point[i].second;
     //   cout<<"( "<<x<<" , "<<y<<" )\n";
        putpixel(x,y,RED);
        delay(50);
    }

    getch();
    closegraph();
    return 0;
}
