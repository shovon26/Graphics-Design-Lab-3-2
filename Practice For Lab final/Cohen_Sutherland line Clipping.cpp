#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
////Cohen-Sutherland line clipping algorithm
const int Top = 8, Bottom = 4, Left = 1, Right = 2, Window = 0;
double x_max, x_min, y_max, y_min;
double getSlope(double x1, double y1, double x2, double y2)
{
	double m = (y2 - y1) / (x2 - x1);
	return m;
}

int regionCode(double x, double y)
{
	int code = 0;
	if (x < x_min)code |= Left;
	if (x > x_max)code |= Right;
	if (y < y_min)code |= Bottom;
	if (y > y_max)code |= Top;
	return code;
}

void getPoint(double x1, double y1, double x2, double y2)
{
	int region1 = regionCode(x1, y1);
	int region2 = regionCode(x2, y2);

	cout << region1 << " " << region2 << "\n";

	if (region1 == 0 && region2 == 0) {

    setcolor(RED);
       line(x1,y1,x2,y2);
		cout << "Accepted from (" << x1 << ',' << y1 << ") " << "to (" << x2 << ',' << y2 << ")\n";
		////Add graphics code to draw the line.
		////line(x1,y1,x2,y2,RED);
		return ;
	}
	else if (region1 & region2)
	{
		cout << "Not Visible\n";
		return ;
	}
	else   ///Clipping Case
	{
		double slope = getSlope(x1, y1, x2, y2);
		int regionOut;
		double x, y;
		if (region1)regionOut = region1;
		else regionOut = region2;

		if (regionOut & Left) {
			x = x_min;
			y = y1 + slope * (x - x1);
		}
		else if (regionOut & Right)
		{
			x = x_max;
			y = y1 + slope * (x - x1);
		}
		else if (regionOut & Top)
		{
			y = y_max;
			x = x1 + 1 / slope * (y - y1);
		}
		else if (regionOut & Bottom)
		{
			y = y_min;
			x = x1 + 1 / slope * (y - y1);
		}

		if (regionOut == region1)
			x1 = x, y1 = y;
		else x2 = x, y2 = y;

		getPoint(x1, y1, x2, y2);

	}
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
	cout << "Enter XMAX YMAX XMIN YMIN :: ";
	cin >> x_max >> y_max >> x_min >> y_min;
	double x1, y1, x2, y2;
	cout << "Enter starting point x1,y1 and ending point x2,y2 :: ";
	cin >> x1 >> y1 >> x2 >> y2;
	int r1 = regionCode(x1, y1);
	int r2 = regionCode(x2, y2);
	if (r1 == 0 && r2 == 0)
	{
		cout << "Visible line\n";
	}
	else {
	        setcolor(BLUE);
            rectangle(100,100,400,400);
		getPoint(x1, y1, x2, y2);
	}

	getch();
    closegraph();
	return 0;
}
