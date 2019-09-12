#include<bits/stdc++.h>
using namespace std;
const int Top=8;
const int Bottom=4;
const int Right=2;
const int Left=1;

int main()
{
    int xmin,xmax,ymin,ymax;
    int no_of_line;
    cout<<"Initial Point :: ";
    cin>>xmin>>xmax>>ymin>>ymax;
    cout<<"Enter number of line :: "<<endl;
    cin>>no_of_line;
    int region1=0,region2=0;

    for(int i=0;i<no_of_line;i++)
    {
        int x1,y2,y1,x2;
        cout<<"Point of p1 and p2 :: ";
        cin>>x1>>y1>>x2>>y2;                     
        if(y1>=ymax){
            region1 |= Top;
        }
        else if(y1<ymin){
            region1 |= Bottom;
        }
        else if(x1>=xmax){
            region1 |= Right;
        }
        else if(x1<xmin){
            region1 |= Left;
        }

        ///x2,y2

        if(y2>=ymax){
            region2 |= Top;
        }
        else if(y2<ymin){
            region2 |= Bottom;
        }
        else if(x2>=xmax){
            region2 |= Right;
        }
        else if(x2<xmin){
            region2 |= Left;
        }

        cout<<region1<<" "<<region2<<endl;

        if(region1==0 && region2==0){
            cout<<"Visible"<<endl;
        }
        else if((region1&region2)==0){
            cout<<"Clipping Candidate"<<endl;
        }
        else{
            cout<<"Not Visible"<<endl;
        }
        region1=0;
        region2=0;
    }


    return 0;
}

