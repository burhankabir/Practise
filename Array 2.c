#include<stdio.h>

int main()
{
int n, a[50], b[50],c[50];
printf ("Enter Array Number :\n");
scanf ("%d",&n);

printf ("Enter 1st array Element:\n");
for(int i=0; i<n; i++)
    {
        scanf ("%d",&a[i]);
    }
        for(int i=0; i<n; i++)
            {
                printf (" %d    ",a[i]);
            }
            printf("\n");


printf ("Enter 2nd array Element:\n");
for(int i=0; i<n; i++)
    {
       scanf ("%d",&b[i]);
    }
        for(int i=0; i<n; i++)
            {
                printf (" %d    ",b[i]);
            }
            printf("\n");
            

for(int i=0; i<n; i++)
    {
       c[i]=a[i]+b[i];
    }

for(int i=0; i<n; i++)
    {
        printf ("%d ",c[i]);
    }

}
