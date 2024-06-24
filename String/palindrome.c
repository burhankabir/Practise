#include <stdio.h>
#include <string.h>

int main() 
{
    char st[50];
    printf("Enter a String:");
    gets(st);
    char st2[50];
    
    strcpy(st2,st);

    strrev(st2);

    if(strcmp(st,st2)==0)
        {
            printf("string is palindrome");
        }
    else
        {
            printf("string not palindrome");
        }
    return 0;
}
