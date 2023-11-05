/*9. Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students. - Write a function to print the names of all the students having age 14.
 - Write another function to print the names of all the students having even roll no.
 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).*/

#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[10];
    int age;
    char address[20];
} s[3];

void evenroll(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (s[i].rollno % 2 == 0)
        {
            printf("%s\n", s[i].name);
        }
    }
}
void detail()
{
    int n;
    printf("Enter the Roll Number of student :");
    scanf("%d", n);
    printf("Roll No. = %d \n Name = %s \n Age = %d \n Address = %s", s[n].rollno, s[n].name, s[n].age, s[n].address);
}

int main()
{
    int n, opt;
    printf("Enter the number of Student :");
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter the details of Student %d\n", i + 1);
        printf("Enter Roll Number :");
        scanf("%d", &s[i].rollno);
        printf("Enter Name : ");
        scanf_s("%s", s[i].name, 10);
        printf("Enter Age :");
        scanf("%d", &s[i].age);
        printf("Enter Address :");
        scanf_s("%s", s[i].address, 20);
    }
    printf("Enter 1 to print the names of all the students having even roll no. \nEnter 2 to display the details of the student\n");
    scanf("%d", &opt);
    if (opt == 1)
    {
        evenroll(n);
    }
    else if (opt == 2)
    {
        detail();
    }
    else
    {
        printf("Wrong Option");
    }
    return 0;
}
