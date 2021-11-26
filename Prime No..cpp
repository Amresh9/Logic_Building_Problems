#include<iostream>
using namespace std;

int main()
{   int n,i, t;
    cout << "enter the no.:";
    cin>>n;
    t=n;
    if(n==2) {
        cout<<"Even Prime No.";
    }

    for(i=3; n>i; i=i+2) {

        if(n%i==0||n%2==0) {

            cout<<"Not Prime";
            break;

        }
        else {
            cout<<"Prime No.";
            break;

        }

    }
    return 0;
}