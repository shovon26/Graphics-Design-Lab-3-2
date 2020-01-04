#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

vector<pair<double, double> > getpoint(double x1, double y1, double x2, double y2) {
    vector<pair<double, double> >pp;
    double dx, dy, x, y;
    double inc_x, inc_y;
    dx = x2 - x1;
    dy = y2 - y1;
    int steps=max(dx,dy);
    double m = dy / dx;

    if (m >= 0 and m <= 1) {
        x = x1 + 1;
        y = y1 + m;
        inc_x = 1;
        inc_y = m;
    } else if (m > 1) {
        x = x1 + (1 / m);
        y = y1 + 1;
        inc_x = 1 / m;
        inc_y = 1;
    }
    cout<<m<<endl;
    double st_x = x1;
    double st_y = y1;
    for(int i=0; i<steps; i++) {
        pp.push_back({st_x, st_y});
        st_x += inc_x;
        st_y += inc_y;
    }
    pp.push_back({x2, y2});

    return pp;
}

int main() {
    double x1, x2, y1, y2, dx, dy, x, y;
    int gd = DETECT, gm;

    cout<<"Enter the starting point and end point :: ";
    cin >> x1 >> y1 >> x2 >> y2;

    initgraph(&gd, &gm, "");

    vector<pair<double, double> >pp;
    pp = getpoint(x1, y1, x2, y2);
    cout << "Point between starting and Ending Point:: \n";
    for (auto it : pp) {
        it.first = ceil(it.first);
        it.second = ceil(it.second);
        int x=(int)it.first;
        int y=(int)it.second;
        putpixel(x,y,RED);
        cout << "( " << x << " , " << y << " )" << "\n";
    }
    getch();
    closegraph();
    return 0;
}


///m=1 :: 1 1 250 250
///m>1 :: 1 2 200 310
///m<1 and m>=0 :: 1 2 310 200
