/*Write a program to calculate the total salary of a person.
The user has to enter the basic salary (an integer) and the grade (an uppercase character),
and depending upon which the total salary is calculated as -
totalSalary = basic + hra + da + allow – pf. 
where : hra = 20% of basic, da = 50% of basic,
allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or any other character,
 pf = 11% of basic. Round off the total salary and then print the integral part only.*/

#include <stdio.h>
int main()
{
    int sal, allow;
    char grade;
    printf("Enter the Salary and Grade : ");
    scanf("%d%c", &sal, &grade);
    switch (grade)
    {
    case 'A':
        allow = 1700;
        break;

    case 'B':
        allow = 1500;
        break;

    default:
        allow = 1300;
        break;
    }

    float ts = sal + .2 * sal + 0.5 * sal - 0.11 * sal + allow;
    printf("Total Salary is: %d", (int)ts);
    return 0;
}