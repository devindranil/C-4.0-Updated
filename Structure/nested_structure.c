/**
 * * Problem Statement:
 * TODO: Write a program to define a structure to store the details of an employee. The details include employee id,name and date of joining. The date of joining should be stored in another structure which includes day, month and year. Display the details of the employee.
 *
 */

#include <stdio.h>
#include <string.h>

struct employee
{
    int empID;
    char empName[30];
    // struct date doj; // nested structure
    struct date
    {
        int dd;
        int mm;
        int yy;
    };
};

int main()
{

    struct employee e1;
    e1.empID = 101;
    strcpy(e1.empName, "Sonno Jaiswal");
    e1.dd = 10;
    e1.mm = 11;
    e1.yy = 2014;

    struct employee e2;
    e2.empID = 102;
    strcpy(e2.empName, "Monu Jaiswal");
    e2.dd = 21;
    e2.mm = 02;
    e2.yy = 2022;

    printf("The ID of employee is: %d\n", e1.empID);
    printf("The Name of employee is: %s\n", e1.empName);
    printf("Employee Date of Joining (dd/mm/yy): %d / %d / %d ", e1.dd, e1.mm, e1.yy);

    return 0;
}