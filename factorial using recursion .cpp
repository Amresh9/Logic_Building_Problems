#include<iostream>
using namespace std;
int fact(int);
int fact(int p){



if(p==0){

return 1;
}
return(p*fact(--p));


}

int main()
{int ft, n, t;
    cout << "Enter the no.:";
    cin>>n;
    t=n;
    
    if(n>=0){
     ft=fact(n);
    cout<<t<<"! = "<<ft;
    }
    
    return 0;
}