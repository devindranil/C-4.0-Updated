#include<stdio.h>
#include<string.h>
int main(){

    char str[100];
    printf("Enter the string: ");
    gets(str);
    printf("%s\n",str);
    printf("%s",strrev(str));
    return 0;
}