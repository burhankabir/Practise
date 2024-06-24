#include <stdio.h>
#include<math.h>

int main()
{
    char st[]="Burhan ";
    char st2[]="Kabir";
    char st3[50];

    printf("%s\n",st);
    printf("%s\n",st2);

    strcat(st,st2);
    printf("%s\n",st);

    return 0;
}