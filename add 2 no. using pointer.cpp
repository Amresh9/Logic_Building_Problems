#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);
 #endif
int a,*p;
int b,*q;
cin>>a;
cin>>b;
p=&a;//   
q=&b;
 int c= *p + *q; //*(&a) + *(&b) ,*&=nullify each other
 cout<<c;






	return 0;
}