#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);
 #endif
int b=0,t=0;
 int n,d;
 //cout<<"enter how many digit no.u enter :";
 cin>>d;
 //cout<<"enter yuor no.:";
 cin>>n;
 for (int i = 0; i < d; i++)
 {
     b=n%10;
     t=t+b;
     n=n/10;

 }
cout<<t;
	return 0;
}