#include<iostream>
#include<math.h>
using namespace std;

int main()
{int i=0,x=2,l=0,p,t, n;
    cout << "Enter the Binary No.:";
    cin>>n;
    t=n;
    while (n>0){
   
p=n%10;
l=l+pow(x, i)*p;
n=n/10;
i++;


}
  cout<<"Decimal No. : "<<l;
    return 0;
}