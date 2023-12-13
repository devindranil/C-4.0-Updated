/*
TODO: Write a program to store the information of 5 students in a structure. The information of each student includes roll number and name. The program should display the information of all the students.
*/

#include<stdio.h>
#include<string.h>
struct student
{
    int rolNo;
    char name[30];
};
int main()
{
    //array of objects
    /*struct student st[5];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the Roll No of a student: \n");
        scanf("%d",&st[i].rolNo);
        fflush(stdin);
        printf("Enter the Name of a student: \n");
        gets(st[i].name);
        fflush(stdin);
    }

    for(i=0;i<3;i++)
    {
        printf("\nRoll No: %d, Name: %s", st[i].rolNo, st[i].name);
    }*/

    /*struct student st1 = {10, "Arnab"};
    printf("\nRoll No:%d,Name:%s", st1.rolNo, st1.name);

    struct student st2 = {20, "Srijan"};
    printf("\nRoll No:%d,Name:%s", st2.rolNo, st2.name);

    struct student st3 = {30, "Koushik"};
    printf("\nRoll No:%d,Name:%s", st3.rolNo, st3.name);

    struct student st4 = {40, "Deepak"};
    printf("\nRoll No:%d,Name:%s", st4.rolNo, st4.name);

    struct student st5 = {50, "Madhusree"};
    printf("\nRoll No:%d,Name:%s", st5.rolNo, st5.name);*/

    // data base
    struct student st[3] = {
        {10,"Smriti Chakraborty"}, //oth index of the array
        {20, "Mridul Kumar Mondal"}, //1th index
        {30, "Sounak Basak"} //2nd index
    };

    printf("\nRoll No: %d, Name: %s", st[1].rolNo, st[1].name);

    for(int i=0;i<3;i++)
    {
        printf("\nRoll No: %d, Name: %s", st[i].rolNo, st[i].name);
    }

    return 0;
}