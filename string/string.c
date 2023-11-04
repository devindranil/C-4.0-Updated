#include<stdio.h>
#include<string.h>
int main(){

    /*by character array*/
    char name[100] = {'R','o','h','i','t',' ','s','h','a','r','m','a','\0'};
    //printf("Indian Team Captain: %s\n",name);

    /* by string literal*/
    char name1[100] = "Virat Kohli";
    //printf("Indian Team Former Captain: %s\n",name1);

    char ch[100] = "10203";
    //printf("%s",ch);

    /*user input*/
    char input[100];
    //printf("Enter your name: ");
    //scanf("%s",input);
    //scanf("%[^\n]s",input);
    //printf("My name is: %s",input);


    /*gets() & puts()*/
    char str[100] = "India is";
    printf("Length: %d",strlen(str));

    return 0;
}