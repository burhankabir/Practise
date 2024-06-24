#include<stdio.h>
#include <math.h>

int main()
{
    int n,r,count=0,temp,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);

//count
    temp=n;
    while(temp!=0)
        {
            temp=temp/10;
            count++;
        }
    //calculate
    temp=n;
    while(temp !=n)
        {
            r=temp%10;
            sum=sum+pow(r,count);
            temp=temp/10;
        }

    if (sum==n)
        {
            printf("%d is an Armstrong Number",n);
        }
   return 0;     
}