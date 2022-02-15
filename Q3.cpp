//No we can't use switch because the expression used in switch must be integral and in the given information we are using decimal values
#include<iostream>
using namespace std;
int main()
{
    float n;
    cout<<"Enter the Richter Scale number "<<endl;
    cin>>n;
    if(n<5.0)
    {
        cout<<"Little or No Damage"<<endl;
    }
    else if((n>=5.0) && (n<5.5))
    {
        cout<<"Some damage";
    }
    else if ((n>=5.5) && (n<6.5))
    {
        cout<<"Serious Damage : Walls May Crack or Fall";
    }
    else if((n>=5.6) && (n<7.5))
    {
        cout<<"Disaster : Houses and Buildings may collapse";
    }
    else
    {
        cout<<"Catastrophe : Most Buildings destroyed";
    }
}