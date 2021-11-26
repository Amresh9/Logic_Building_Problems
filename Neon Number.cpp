#include<iostream>
using namespace std;

int main()
{   int n, sq,m=0,t,l;
    cout << "Enter the number :";
    cin>>n;
    t=n;
      sq=n*n;
    while(sq>0) {

        l=sq%10;
        m=m+l;
        sq=sq/10;
    }

    if(m==t) {
        cout<<"Neon Number";
    }
    else {
        cout<<"Not a Neon Number";
    }
    return 0;
}