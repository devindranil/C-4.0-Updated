//Program to count the no of vowel in a string
/*
    india =  i + i + a = 3
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i=0; //1 2 3 4 5
    int len, count=0; //1 2 3
    printf("Enter a string: ");
    gets(s);

    len = strlen(s); // india = i n d i a

    while(i<=len){
        //vowel logic
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}