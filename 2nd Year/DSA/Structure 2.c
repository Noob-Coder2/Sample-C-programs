/*Write a program to store and print the roll no., name, age and marks of a student using structures. 
Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with 
roll no. 1.*/

#include <stdio.h>

struct student
{
    int roll;
    char name[15];
    int age;
    float marks;
} s[15];

int main()
{
    for (size_t i = 0; i < 3; i++)
    {
        printf("Enter the details of %d student:\n", i + 1);
        printf("Enter Roll Number:");
        scanf("%d",&s[i].roll);
        printf("Enter age :");
        scanf("%d",&s[i].age);
        printf("Enter Marks :");
        scanf("%d",&s[i].marks);
        printf("Enter name:");
        scanf_s("%s",s[i].name);
        
    }
    
    //Printing Data

    for (size_t i = 0; i < 15; i++)
    {
        printf("the details of %d student:\n", i + 1);
        printf("Roll Number:");
        printf("%d\n",s[i].roll);
        printf("Age");
        printf("%d\n",s[i].age);
        printf( "Name:");
        printf_s("%s\n",s[i].name);
        printf("Marks :");
        printf("%d\n",s[i].marks);
    }
    
    return 0;
}