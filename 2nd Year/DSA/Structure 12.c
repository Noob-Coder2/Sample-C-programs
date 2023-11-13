/*12. Write a structure to store the names, salary and hours of work per day of 10 employees in a company. 
Write a program to increase the salary depending on the number of hours of work per day as follows and 
then print the name of all the employees along with their final salaries. Hours of work per day 8
Increase in salary $50*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[10];
    int salary;
    int hour;
}e[10];

int main()
{
    for (size_t i = 0; i <10; i++)
    {
        printf("Enter the Details of Employee %d",i+1);
        printf("Enter name :");
        scanf_s("%s",e[i].name);
        printf("Enter Salary : ");
        scanf("%d",e[i].salary);
        printf("Enter hours of work per day : ");
        scanf("%d",&e[i].hour);
    }
    for (size_t i = 0; i < 10; i++)
    {
        if (e[i].hour>7)
        {
            e[i].salary +=50;
        }
        printf("Name = %s \t Salary = %d\n",e[i].name,e[i].salary);
    }
    return 0;
}