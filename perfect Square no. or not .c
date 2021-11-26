#include<stdio.h>

int main()
{

    int n, t=1;
    printf("enter the no :");
    scanf("%d",&n);
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            t=t+i;
        }

    }
    if(t==n)
        printf("Perfect Number");
    else
        printf("Not a perfect no.");
    return 0;
}