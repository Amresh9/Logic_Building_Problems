#include<iostream>
using namespace std;

int main()
{   int a, b, you;
    cout << "Enter 1st No.:";
    cin>>a;
    cout<<"Enter 2nd No.:";
    cin>>b;
    cout<<"a="<<a<<"  ";
    cout<<"b="<<b<<"  "<<endl;
//logic start
    a=a+b;

    b=a-b;
    a=a-b;
//logic end

    // cout<<"---After Swap without using third variable--\n"<<end;
    cout<<"After Swap"<<endl;
    cout<<"a="<<a<<"  ";
    cout<<"b="<<b<<"  ";
    return 0;
}