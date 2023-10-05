#include <stdio.h>
int main()
{
    int sal,allow; 
    char grade;
    printf("Enter the Salary and Grade : ");
    scanf("%d%c",&sal,&grade);
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
    
    float ts = 0.2 *sal + 0.5*sal - 0.11*sal;
    printf("Total Salary is: %d",(int)ts);
    return 0;
}