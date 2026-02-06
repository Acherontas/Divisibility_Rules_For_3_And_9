#include <iostream>
#include <iomanip>
#include <math.h>
#include "sum_cdi.h"
using namespace std;

int main(int argc,char** argv)
{
    long double x;
    x=stold(argv[1]);
    int preci;
    preci=stoi(argv[2]);
    cout<<"ur x is " <<std::setprecision(preci) << x <<"\n";
    sum_cdi *smcd=new sum_cdi();
    int summy;
    summy=smcd->cdis(x,1);
    cout<<"\n";
    cout<<"with sum of summy ::== " << summy <<"\n";
    cout<<"---------------------------For 3----------------------------\n";
    long double test;
    test=(long double)summy/(long double)3;
    cout<<"with test " << test <<"\n";
    long double rest;
    rest=(long double)x/(long double)3;
    cout<<"returning " << rest <<"\n";
    long double fractpart,intpart;
    fractpart=modf(rest,&intpart);
    cout<<"with" << rest << " as " << intpart << "  and " << fractpart <<"\n";
    if (fractpart==0.0){cout<<"divisible by 3 @ 0.0 :: yes \n";}
    if (fractpart==0){cout<<"divisible by 3 @ 0 :: yes \n";}
    cout<<"---------------------------End For 3----------------------------\n";
    cout<<"\n";
    cout<<"---------------------------For 9----------------------------\n";
    test=(long double)summy/(long double)9;
    cout<<"with test " << test <<"\n";
    rest=(long double)x/(long double)9;
    cout<<"returning " << rest <<"\n";
    fractpart=modf(rest,&intpart);
    cout<<"with" << rest << " as " << intpart << "  and " << fractpart <<"\n";
    if (fractpart==0.0){cout<<"divisible by 9 @ 0.0 :: yes \n";}
    if (fractpart==0){cout<<"divisible by 9 @ 0 :: yes \n";}
    cout<<"---------------------------End For 9----------------------------\n";
    return 0;
}
