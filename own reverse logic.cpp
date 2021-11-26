#include<iostream>
#include<math.h>
using namespace std;

int main()
{ int n ,p,l=0,x=10,m,t, count=0,j;
    cout <<"Enter the No. :";
    cin>>n;
    t=n;
    j=t;
    while(n>0){
    m=n%10;
    count++;
    n=n/10;
    
    }
    while(t>0){
    
    p=t%10;
    l=l+(pow(x, count)*p);
    t=t/10;
    
    count--;
    }
    
    cout<<" After Reveresed: "<<l/10;
    return 0;
}