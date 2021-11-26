#include<iostream>
using namespace std;

int main()
{   int a, b, you;
    cout << "Enter 1st No.:";
    cin>>a;
    cout<<"Enter 2nd No.:";
    cin>>b;
    cout<<"a="<<a<<"  ";
    cout<<"b="<<b<<"  ";

    you=a;
    a=b;
    b=you;
   // cout<<"---After Swap using third variable--\n"<<endl;

    cout<<"a="<<a<<"  ";
    cout<<"b="<<b<<"  ";
    return 0;
}