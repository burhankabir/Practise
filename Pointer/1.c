# include<stdio.h>

int main()
{
    int x=10;
    int y=5;

    int *ptr;
    ptr=&x;

    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
     printf("%d\n",&ptr);
}
