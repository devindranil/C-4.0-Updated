/*
TODO: CREATE A STRUCTURE AS A ARGUMENT OF A FUNCTION
*/
#include<stdio.h>
//define the structure 
struct student{
    char name[30]; //oth index
    int roll;//1th
    int marks;//2nd
};

//write a function to display all the above information - define
void displayStudent(struct student *ptr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Student Name: %s\n",ptr[i].name);
        printf("Student Roll No: %d\n",ptr[i].roll);
        printf("Student Exam Marks: %d\n",ptr[i].marks);
    }
}

int main(){
    struct student st[100];
    int n=0;
    int i;

    for(i=0;i<2;i++)
    {
        printf("Enter the Roll No of a student: \n");
        scanf("%d",&st[i].roll);
        fflush(stdin);
        printf("Enter the Name of a student: \n");
        gets(st[i].name);
        fflush(stdin);
        printf("Enter the Exams Marks of a student: \n");
        scanf("%d",&st[i].marks);
        fflush(stdin);
        n=n+1;
    }

    displayStudent(st,n); //call
    
    return 0;
}