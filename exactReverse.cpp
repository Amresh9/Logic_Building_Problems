//Find exactreverse of a number.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int rem,x=0;int trailing=0; int lock=1;
	int n;cin>>n;
	while(n>0){
		
		rem=n%10;
		if(rem==0 &&lock) ++trailing;
		else lock=0;
		x=x*10+rem;
		n=n/10;
		
	}
	while(trailing--) cout<<0;
	cout<<x;
	return 0;
	
}
