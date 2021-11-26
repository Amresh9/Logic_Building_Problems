#include<iostream>
using namespace std;

int main()
{   int n, t, l, p=0;
    cout << "enter the no.";
    cin>>n;
    t=n;
    while(n>0) {
        l=n%10;
        p=p+(l*l*l);
        n=n/10;

    }
    if(t==p)
        cout<<"Armstrong No.";
    else
        cout<<"Not a Armstrong No.";
    return 0;
}