/*Get the input of student: Name, Roll No, Marks in 6 subjects in 12th.
Find if the student is eligible for admission in Delhi University.
A student is eligible for DU if he has scored 95 % or more in Best 4.*/

#include <stdio.h>

struct marks
{
    int roll_no;
    char name[10];
    int marks[6];
} m;

int main()
{
    int e;
    //Input Structure
    printf("Enter the details of %d student:\n", 1);
    printf("Enter Roll Number:");
    scanf("%d", &m.roll_no);
    printf("Enter name:");
    scanf_s("%s", m.name);
    for (size_t i = 0; i < 6; i++)
    {
        printf("Enter Marks of subject %d:", i + 1);
        scanf("%d", &m.marks[i]);
    }

    // Sorting marks
    for (size_t i = 0; i<6 ; i++)
    {
        for (size_t j = i; j < 6; j++)
        {
            if (m.marks[i]>m.marks[j])
            {e = m.marks[i];
            m.marks[i]=m.marks[j];
            m.marks[j]=e;}
        }   
    }
    /*for (size_t i = 0; i < 6; i++)
    {
        printf("%d\t",m.marks[i]);
    }*/
    
    int sum=0;
    for (size_t i = 2; i < 6; i++)
    {
        sum+= m.marks[i];
    }
    if ((float)sum/4>=95)
    {
        printf("Student is Eligible.");
    }
    return 0;
}