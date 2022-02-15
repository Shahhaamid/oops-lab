#include<iostream>
using namespace std;
int main()
{
    double purchase,dis,serv,tdis,sserv;
    char id;
    cout<<"Enter purchased amount"<<endl;
    cin>>purchase;
    cout<<"Are you a Teacher (y/n)"<<endl;
    cin>>id;
    dis=purchase;
    cout<<"Total purchases                "<<purchase<<endl;
    if((id=='y')&&(purchase>=100.0))
    {
        tdis = purchase * 0.12;
        cout<<"Teacher's Discount (12%)       "<<tdis<<endl;
        dis = purchase - tdis;
        cout<<"Discounted Total               "<<dis<<endl;
    }
    else if((id=='y')&&(purchase<100.0))
    {
        tdis = purchase * 0.10;
        cout<<"Teacher's Discount (10%)       "<<tdis<<endl;
        dis = purchase - tdis;
        cout<<"Teacher Discounted Price      "<<dis<<endl; 
    }
    sserv = dis * 0.05;
    cout<<"Sales Tax (5%)                 "<<sserv<<endl;
    serv = dis + sserv;
    cout<<"Total                          "<<serv;

}