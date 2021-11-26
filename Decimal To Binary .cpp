#include<iostream>
#include<math.h>
using namespace std;

int main()
{   int i=0,x=10,l,p,t,z=0,n;
    cout << "Enter the Decimal No.:";
    cin>>n;
    while(n>0) {

        l=n%2;
        p=n/2;
        n=p;

        z+=l*pow(x, i);
        i++;


    }


    cout<<"Binary No. : "<<z;
    return 0;
}