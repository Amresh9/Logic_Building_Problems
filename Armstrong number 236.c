#include<stdio.h>

int main()
{   int n, t, l, p=0;
    printf( "enter the no.");
    scanf("%d", &n);
    t=n;
    while(n>0) {
        l=n%10;
        p=p+(l*l*l);
        n=n/10;

    }
    if(t==p)
        printf("Armstrong No.");
    else
        printf("Not a Armstrong No.");
    return 0;
}
