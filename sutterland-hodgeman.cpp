#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
const int MX=100;
int P_SZ, C_SZ;
pair<double,double> Clipper[MX], polygon[MX];

pair<double,double> Intersection(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    double x = ((x1*y2 - y1*x2) * (x3-x4) - (x1-x2) * (x3*y4 - y3*x4)) / ((x1-x2) * (y3-y4) - (y1-y2) * (x3-x4));
    double y = ((x1*y2 - y1*x2) * (y3-y4) - (y1-y2) * (x3*y4 - y3*x4)) / ((x1-x2) * (y3-y4) - (y1-y2) * (x3-x4));
    return {x, y};
}

void Clip(double x1, double y1, double x2, double y2)
{
    pair<double,double> New_Points[MX+10];
    int New_SZ = 0;
    for(int i = 0; i < P_SZ; i++)
    {
        int j = (i + 1) % P_SZ;
        double x3 = polygon[i].first, y3 = polygon[i].second;
        double x4 = polygon[j].first, y4 = polygon[j].second;
        double pos1 = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
        double pos2 = (x2 - x1) * (y4 - y1) - (y2 - y1) * (x4 - x1);

        if(pos1 < 0 && pos2 < 0)
        {
            New_Points[New_SZ] = {x4, y4};
            New_SZ++;
        }

        else if(pos1 >=0 && pos2 < 0)
        {
            New_Points[New_SZ] = Intersection(x1, y1, x2, y2, x3, y3, x4, y4);
            New_SZ++;
            New_Points[New_SZ] = {x4, y4};
            New_SZ++;
        }

        else if(pos1 < 0 && pos2 >= 0)
        {
            New_Points[New_SZ] = Intersection(x1, y1, x2, y2, x3, y3, x4, y4);
            New_SZ++;
        }
    }
    P_SZ = New_SZ;
    cout << P_SZ << endl;
    for(int i = 0; i < P_SZ; i++)
        polygon[i]=New_Points[i];
}

void polygon_Clipping()
{
    for(int i = 0; i < C_SZ; i++)
    {
        int j = (i + 1) % C_SZ;
        Clip(Clipper[i].first, Clipper[i].second, Clipper[j].first, Clipper[j].second);
    }

    for(int i = 0; i < P_SZ; i++)
    {
        cout << fixed << setprecision(2) << polygon[i].first << ' ' << polygon[i].second << endl;
        putpixel(polygon[i].first,polygon[i].second,RED);
        delay(20);
    }
}

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    cin >> P_SZ;
    for(int i = 0; i < P_SZ; i++)
        cin >> polygon[i].first >> polygon[i].second;

    cin >> C_SZ;
    for(int i = 0; i < C_SZ; i++)
        cin >> Clipper[i].first >> Clipper[i].second;
    polygon_Clipping();


    getch();
    closegraph();
    return 0;
}
