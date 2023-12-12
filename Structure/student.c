//WAP TO DEFINE A STRUCTURE TO STORE FOLLOWING INFORMATION OF A STUDENT
/*
    (1)STUDENT ROLL NO
    (2)STUDENT NAME
*/

#include<stdio.h>
#include<string.h>
//structure define - creating a template of structure
struct student
{
    int rollNo;
    char name[100];
    int age;
};

int main()
{
    //Grouping method
    /*struct student s1 = {101,"Rohit"};
    struct student s2 = {102,"Virat"};

    //By using . or member operator
    struct student s3;
    s3.rollNo=103;
    //s3.name="Dhoni";
    strcpy(s3.name,"Dhoni");*/

    //how to access the value inside in the member
    /*printf("Student ID: %d\n",s1.rollNo);
    printf("Student ID: %d\n",s2.rollNo);
    printf("Student ID: %d\n",s3.rollNo);
    printf("\n");
    printf("Student Name: %s\n",s1.name);
    printf("Student Name: %s\n",s2.name);
    printf("Student Name: %s\n",s3.name);*/


    //while user input don't use scanf only in string type
    //user input
    struct student s1;
    printf("Enter the Roll No: ");
    scanf("%d",&s1.rollNo);
    fflush(stdin);
    printf("Enter the Name: ");
    //scanf("%d[^\n]s",&s1.name);//BUFFER
    gets(s1.name);
    fflush(stdin);
    printf("Enter the age: ");
    scanf("%d",&s1.age);
    

    printf("The roll no is: %d\n",s1.rollNo);
    printf("The name is: %s\n",s1.name);
    printf("The age is: %d\n",s1.age);
    return 0;
}

