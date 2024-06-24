# include<stdio.h>

int main()
{
    int x=10;
    int y=5;

    int *ptr;
    ptr=&x;

    printf("Value of x is: %d\n",x);
    printf("Address of X is: %d\n",&x);
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
     printf("%d\n",&ptr);
}
