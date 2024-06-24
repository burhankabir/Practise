#include <stdio.h>
#include<math.h>

int main()
{
    char st[]="Burhan Kabir";
    int i=0, len=0;

    while(st[i] !='\0')
        {
            i++;
            len++;
        }
    printf("%d",len);
    return 0;
}