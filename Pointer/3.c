# include<stdio.h>

int main()
{
    int x=10;
    int y=5;

    int *ptr;
    ptr=&x;

    printf("Value of pointer is: %d\n",ptr);
    printf("content of Pointer is: %d\n", *ptr);


}
