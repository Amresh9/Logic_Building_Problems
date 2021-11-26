#include<iostream>
using namespace std;
int fact( int);
int fact(int p)
{
    int ft=1;
    for(int i=1; p>=i; i++) {
        ft=ft*i;

    }
    return(ft);
}

int main()
{   int n, t, l, m=0;
    cout << "enter the number :";
    cin>>n;
    t=n;
    while(n>0) {
        
        l=n%10;
        m=m+fact(l);
        n=n/10;


    }
    if(m==t) {
        cout<<"Strong No.";

    }
    else {
        cout<<"not a strong number";
    }

    return 0;
}