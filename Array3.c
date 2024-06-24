#include<stdio.h>

int main()
{
    int n,fact=1;
    printf ("Enter a Number:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
        {
            fact=fact*i;
        }
    printf("the factorial of %d is: %llu",n,fact);
    return 0;
}