//C program to find total number of alphabets, digits or special characters in a string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, len;
    int alphabets, digits, others;

    alphabets = digits = others = 0;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }
    }
    printf("Alphabets = %d", alphabets);
    printf("Digits = %d", digits);
    printf("Special characters = %d", others);
}