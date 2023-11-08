//program to concatenate two strings

#include<stdio.h>
#include<string.h>
int main()
{
    
    char str1[30],str2[30],str3[30];
    int l1,l2,i;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    /*printf("Enter the third string: ");
    gets(str3);
    
    if(strcmp(str1,str2,str3) == 0){
        printf("both string are equal");
    }else{
        printf("string are not equal");
    }*/
   
    
    //MANUALLY 
    // str1 = India
    // Str2 = Best
    l1=strlen(str1); //length of the string 5
    l2=strlen(str2); // 4
    
    for(i=0;i<=l2;i++)
    {
        str1[l1+i]=str2[i];
    }
    printf("%s",str1);
    return 0;
}