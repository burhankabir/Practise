#include<stdio.h>

int main()
{
int n, a[50];
printf ("Enter Array Number :\n");
scanf ("%d",&n);

printf ("Enter array Element:\n");
for(int i=0; i<n; i++)
    {
        scanf ("%d",&a[i]);
    }

for(int i=0; i<n; i++)
    {
        printf ("%d ",a[i]);
    }

}