#include<stdio.h>
int main()
{
    int a[5]={10,20,30,15,50};
    int *ptr;

    ptr= &a[0];

    for(int i=0; i<5; i++)
        {
             printf("%d\n",*ptr);
             ptr++;
        }
}