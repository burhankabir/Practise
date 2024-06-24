#include<stdio.h>

int main()
{
    char str[100], ch;
    int i, vowel, consonant, digit, word, other;
    i= vowel= consonant= digit= word= other=0;

    printf("Enter a String: ");
    gets(str);

    while ((ch=str[i]) !='\0')
        {
            if(ch=='a' || ch=='e'||ch=='i' || ch=='o'|| ch=='u' || ch=='A' || ch=='E' || ch=='I'|| ch=='O' || ch=='U' )
                {
                    vowel++;
                }
            else if( ch>='a' && ch<='z' || ch>='A' && ch<='Z')
                {
                    consonant++;
                }
            else if(ch>=0 && ch<=9)
                {
                    digit++;
                }
            else if (ch== ' ')
                {
                    word++;
                }
            else
                {
                    other++;
                }
            i++;
        }
    
    printf ("The Number of Vowel is:%d\n",vowel);
    printf ("The Number of Consonant is:%d\n",consonant);
    printf ("The Number of Digit is:%d\n",digit);
    word=word+1;
    printf ("The Number of Word is:%dBur\n",word);
    printf ("The Number of Other is:%d\n",other);

    return 0;   
}
