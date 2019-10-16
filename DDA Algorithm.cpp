#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int sz = 1e5 + 10;

////DDA Algorithm

vector<pair<double, double>> getpoint(double x1, double y1, double x2, double y2)
{
	vector<pair<double, double>>pp;
	double dx, dy, x, y;
	double inc_x, inc_y; ///increment
	dx = x2 - x1;
	dy = y2 - y1;
	double m = dy / dx;
	bool f1 = 0, f2 = 0;
	if (m > 0 and m <= 1) {
		f1 = 1;
		x = x1 + 1;
		y = y1 + m;
		inc_x = 1;
		inc_y = m;
	}
	else if (m >= -1 and m <= 0) {
		x = x1 - 1;
		y = y1 - m;
	}
	else if (m > 1) {
		f2 = 1;
		x = x1 + (1 / m);
		y = y1 + 1;
		inc_x = 1 / m;
		inc_y = 1;
	}
	else if (m < -1) {
		x = x1 - (1 / m);
		y = y1 - 1;
	}

	double st_x = x1;
	double st_y = y1;

	if (f1 or f2) {
		while (st_x != x2)
		{
			pp.push_back({st_x, st_y});
			st_x += inc_x;
			st_y += inc_y;
		}
		pp.push_back({x2, y2});
	}
  
  ////Do for negative slope or decrement
  
	return pp;
}


int main()
{
	double x1, x2, y1, y2, dx, dy, x, y;
	cin >> x1 >> y1 >> x2 >> y2;
	vector<pair<double, double>>pp;
	pp = getpoint(x1, y1, x2, y2);
	cout << "Point between starting and Ending Point:: \n";
	for (auto it : pp)
	{
		it.first = ceil(it.first);
		it.second = ceil(it.second);
		cout << "( " << it.first << " , " << it.second << " )" << "\n";
	}
	return 0;
}
