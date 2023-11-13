/*Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.*/
#include <stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter the side of triangle :");
    scanf("%d",&side1);
    scanf("%d",&side2);
    scanf("%d",&side3);
    if (side1==side2 || side1==side3)
    {
        if (side2==side3)
        {
            printf("Equilateral Triangle");
        }
        else
        {
            printf("Isosceles Triangle");
        }
    }
    else
    {
        printf("Scalene Triangle");
    }
    return 0;
}
