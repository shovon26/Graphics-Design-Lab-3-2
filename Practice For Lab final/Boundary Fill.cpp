#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

// Function for 4 connected Pixels
void boundaryFill4(int x, int y, int fill_color,int boundary_color) {
    if(getpixel(x, y) != boundary_color &&
            getpixel(x, y) != fill_color) {
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}

// Function for 8 connected Pixels
void boundaryFill8(int x, int y, int fill_color,int boundary_color) {
    if(getpixel(x, y) != boundary_color &&
            getpixel(x, y) != fill_color) {
        putpixel(x, y, fill_color);
        boundaryFill8(x + 1, y, fill_color, boundary_color);
        boundaryFill8(x, y + 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y, fill_color, boundary_color);
        boundaryFill8(x, y - 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y - 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y + 1, fill_color, boundary_color);
        boundaryFill8(x + 1, y - 1, fill_color, boundary_color);
        boundaryFill8(x + 1, y + 1, fill_color, boundary_color);
    }
}

int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int choice;
    cout<<"Enter your Choice (1/2) :: ";
    cin>>choice;
    if(choice==1) {
        cout<<"Enter Circle center and radius (x,y,r) :: ";
        int x,y,r;
        cin>>x>>y>>r;
        circle(x,y,r);
        boundaryFill4(x,y,6,15);
        delay(1000);

    } else {
        rectangle(50,50,100,100);
        boundaryFill8(55,55,4,15);
        delay(1000);
    }
    getch();
    closegraph();
    return 0;
}
