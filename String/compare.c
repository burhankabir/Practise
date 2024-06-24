#include <stdio.h>
#include <string.h> // Include the string.h header file for strcmp()

int main()
{
    char st[] = "Burhan";
    char st2[] = "Burhan";

    int n;
    n = strcmp(st, st2); // Use strcmp() to compare strings

    if (n == 0)
    {
        printf("Strings Are Equal\n");
    }
    else
    {
        printf("Strings Are not Equal\n");
    }

    return 0;
}
