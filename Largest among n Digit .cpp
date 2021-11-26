#include<iostream>
using namespace std;

int main()
{int l=0,n, t, p;
    cout << "enter the no.";
    cin>>n;
    t=n;
    while(n>0){
   
p=n%10;
if(l<p){
l=p;
}
n=n/10;

}
cout<<"From "<<t<<"  largest digit is "<<l;
    return 0;
}