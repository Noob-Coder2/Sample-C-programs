/*7. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having 
elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/

#include <stdio.h>

struct marks
{
    int roll_no;
    char name[10];
    int chem_marks;
    int maths_marks;
    int phy_marks;
}m[5];

int main()
{
    for (size_t i = 0; i < 5; i++)
    {
        printf("Enter the details of %d student:\n", i + 1);
        printf("Enter Roll Number:");
        scanf("%d",&m[i].roll_no);
        printf("Enter name:");
        scanf_s("%s",m[i].name);
        printf("Enter Chemistry Marks :");
        scanf("%d",&m[i].chem_marks);
        printf("Enter Mathematics Marks :");
        scanf("%d",&m[i].maths_marks);
        printf("Enter Physics Marks :");
        scanf("%d",&m[i].phy_marks);
    }
    
    float percent[5];

    for (size_t i = 0; i < 5; i++)
    {
        percent[i] = (m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/3;
        printf("Percentage of %d student is %.2f\n",i+1,percent[i]);
    }
    return 0;
}