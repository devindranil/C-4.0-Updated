// wap in c to create and open a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *fp;
char choice;
char ch;
char mainLogic(char choice)
{
    switch (choice)
    {
    case 'c':
        ch = fgetc(fp);
        printf("The Character Read is: %c\n", ch);
        break;
    case 'a':
        ch = fgetc(fp);
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = fgetc(fp);
        }
        break;
    default:
        printf("Invalid Keyborad Input!!!!!");
    }
}
int main()
{
    /*FILE *fp; //File structure define
    char str[100];
    fp=fopen("F1.txt","a"); //filemode = w=write, r=read, a=append


    if(fp==NULL){
        printf("File does not exist\n");
        exit(1);
    }else{
        printf("Enter the text: \n");
        gets(str);
        fputs(str,fp);
        fclose(fp);
    }*/

    /*FILE *fp;
    char ch;
    fp = fopen("bio.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }else{
        ch=fgetc(fp);
        while(ch != EOF) //EOF = END OF FILE - MACROS IN C
        {
            printf("%c",ch);
            ch = fgetc(fp);
        }
    }*/

    fp = fopen("bio.txt", "r");
    while (1)
    {
        if (fp == NULL)
        {
            perror("File does not exist");
            exit(1);
        }
        else
        {
            printf("Enter 'c' to read only first character & enter 'a' to read all the information store to a file\n");
            scanf("%c", &choice);
            mainLogic(choice);
            fclose(fp);
        }
    }
    return 0;
}