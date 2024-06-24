# include<stdio.h>

int main()
{
    int x=10;
    int y=5;
    int z=15;

    int *ptr;

    ptr= &x;
    printf("Value of x is: %d\n",*ptr);

    ptr= &y;
    printf("Value of y is: %d\n",*ptr);

    ptr= &z;
    printf("Value of z is: %d\n",*ptr);

}
