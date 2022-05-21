//Find reverse of a number and store in a variable.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int rem,x=0;
	int n;cin>>n;
	while(n>0){
		
		rem=n%10;
		x=x*10+rem;
		n=n/10;
		
	}
	
	cout<<x;
	return 0;
	
}
