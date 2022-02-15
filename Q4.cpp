#include<iostream>
using namespace std;
void coordinate(float x, float y)
{
    if(x==0 && y==0)
    {
      cout<<"("<<x<<","<<y<<") "<<"is on origin";
    }
    else if(x>0 && y>0)
    {
      cout<<"("<<x<<","<<y<<") "<<"is in Quadrant I";
    }
    else if(x<0 && y>0)
    {
        cout<<"("<<x<<","<<y<<") "<<"is in Quadrant II";
    }
    else if(x<0 && y<0)
    {
        cout<<"("<<x<<","<<y<<") "<<"is in Quadrant III";
    }
    else if(x>0 && y<0)
    {
        cout<<"("<<x<<","<<y<<") "<<"is in Quadrant IV";
    }
    else if(x==0 && (y>0 || y<0))
    {
        cout<<"("<<x<<","<<y<<") "<<"is on X-axis";
    }
    else if(y==0 && (x>0 || x<0))
    {
        cout<<"("<<x<<","<<y<<") "<<"is on Y-axis";
    }

}
int main()
{
    float x,y;
    cout<<"Enter the X-Y Co-ordinates"<<endl;
    cin>>x>>y;
    coordinate(x,y);
}