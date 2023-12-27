// develop a c program to merge the content of 2 text file into  third text file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{   
    FILE *fp1, *fp2, *fp3;
    char ch;

    fp1=fopen("F1.txt","r");
    fp2=fopen("bio.txt","r");
    fp3=fopen("F3.txt","a");

    if(fp1 == NULL || fp2 == NULL || fp3 == NULL){
        perror("File not exist !!!!");
        return 1;
    }else{
        // File 1 - F3.txt
        ch=fgetc(fp1);
        while(ch!=EOF){
            fputc(ch,fp3);
            ch=fgetc(fp1);
        }

        // File 2 - bio.txt
        ch=fgetc(fp2);
        while(ch!=EOF){
            fputc(ch,fp3);
            ch=fgetc(fp2);
        }

        printf("File sucessfully merged !!! \n");

        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
    }

   

    return 0;
}