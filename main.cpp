#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    double i,l,r,m,p,cnt=1,tot_interest=0;

    cout<<"Enter the principal"<<endl;
    cin>>p;

    cout<<"Enter the interest rate"<<endl;
    cin>>r;

    cout<<"Enter the length of the loan in months"<<endl;
    cin>>m;

     r = r/100;
     l=(p*(r/12.0))/(1-(pow((1+r/12.0),-m)));


     cout<<"Your car payment will be "<<l<<" dollars per month"<<endl;
     system("pause");

     while(cnt<=m)
     {
         i = 30.4167*(p*(r/365));
         tot_interest=tot_interest+i;
         cout<<"Interest charged in month "<<cnt<<": "<<i<<endl;
         cout<<""<<endl;
         cnt++;
         p=p-(l-i);

         cout<<"Remaining balance: "<<p<<endl;
         cout<<""<<endl;
     }

     cout<<"Total interest paid "<<tot_interest<<" dollars"<<endl;
     system("Pause");
     return 0;
}
