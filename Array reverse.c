#include<stdio.h>

int main ()
{
int n,a[20];
printf (" enter a number:");
scanf("%d",&n);

for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
printf("Array is: \n");
for(int i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");

printf("Reverse Array is:\n");
for(int i=n-1;i>=0; i--)
    {
         printf("%d  ",a[i]); 
    }
}