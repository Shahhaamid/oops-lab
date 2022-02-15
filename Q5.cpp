#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char num;
    float gm,odore,def;
    cout<<"(1) Carbon monoxide"<<endl<<"(2) Hydrocarbons"<<endl<<"(3) Nitrogen oxides"<<endl<<"(4) Nonmethane Hydrocarbons"<<endl;
    cout<<"Enter the pollutant Number"<<endl;
    cin>>num;
    if((num=='1') || (num=='2') || (num=='3') || (num=='4'))
     {
      cout<<"Enter the Number of grams emitted per mile >> ";
      cin>>gm;
      cout<<"Enter the odometer reading >> ";
      cin>>odore;
     }
    else 
    {
        cout<<"Wrong input";
    }

    if(num=='1' && odore<50000)
    {
        def = 3.4;
        if(gm > def)
        {
            cout<<"Emissions exceed permitted level of 3.4 grams/mile";
        }
        else 
        {
            cout<<"Everything is under control";
        }  
    }
    else if(num=='1' && odore > 50000)
    {
        def = 4.2;
        if(gm > def)
        {
            cout<<"Emissions exceed permitted level of 4.2 grams/mile";
        }
        else 
        {
            cout<<"Everything is under control";
        }
    }
    else if(num =='2' && odore < 50000)
    {
        def = 0.31;
        if(gm > def)
        {
            cout<<"Emissions exceed permitted level of 0.31 grams/mile";
        }
        else
        {
            cout<<"Everything is under control";
        }
    }
    else if(num == '2' && odore > 50000)
    {
        def = 0.39;
        if(gm > def)
        {
            cout<<"Emissions exceed permitted level of 0.39 grams/mile";
        }
        else
        {
            cout<<"everything is under control";
        }
    }
    else if(num == '3' && odore < 50000)
    {
        def = 0.4;
        if(gm > def)
        {
            cout<<"Emissions exceed permitted level of 0.4 grams/mile";
        }
        else 
        {
            cout<<"Everything is under control";
        }  
    }
    else if(num == '3' && odore > 50000)
    {
        def = 0.5;
        if(gm > def)
        {
            cout<<"Emissions exceed permitted level of 0.5 grams/mile";
        }
        else 
        {
            cout<<"Everything is Under control";
        }
    }
    else if(num == '4' && odore < 50000)
    {
        def = 0.25;
        if(gm > def)
        {
            cout<<"Emissions exceed permitted level of 0.25 grams/mile";
        }
        else{
            cout<<"Everything is under control";
        }
    }
    else if(num == '4' && odore > 50000)
    {
        def = 0.31;
        if(gm > def)
        {
            cout<<"Emissions exceed permitted level of 0.31 grams/mile";
        }
        else 
        {
            cout<<"Everything is under control";
        }
    }

        
}