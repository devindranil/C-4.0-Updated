//Program to check palindrome string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, len; //madam=5
    int flag = 0; //check string palindrome or not

    printf("Enter a string: ");
    gets(str); //madam

    len = strlen(str); //5

    for(i=0;i < len ;i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 1; //not a palindrome
            break; //exit from loop
        }
    }

    if (flag) // if flag 1 not a palindrome
    {
        printf("%s is not a palindrome", str);
    }    
    else 
    {
        printf("%s is a palindrome", str);
    }
    return 0;
}