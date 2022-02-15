#include<iostream>
using namespace std;
int main()
{
    float hei,wei,stat;
    cout<<"Enter the height in Inches"<<endl;
    cin>>hei;
    cout<<"Enter the weight in pounds"<<endl;
    cin>>wei;
    stat = 703 * (wei/(hei*hei));
    if(stat<18.5)
    {
        cout<<"Under weight";

    }
    else if((stat>=18.5)&&(stat<25.0))
    {
        cout<<"Normal";
    }
    else if((stat>=25.0)&&(stat<30.0))
    {
        cout<<"Overweight";
    }
    else if(stat>=30.0)
    {
        cout<<"Obese";
    }

}