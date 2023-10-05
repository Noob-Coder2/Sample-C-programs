/*Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.*/

#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter X-Cordinat and Y-Cordinate :");
    scanf("%d%d",&x,&y);
    if (x<0)
    {
        if (y<0)
        {
            printf("3rd Quadrant");
        }
        else
        {
            printf("2nd Quadrant");
        }
    }
    else
    {
        if (y<0)
        {
            printf("4th Quadrant");
        }
        else
        {
            printf("1st Quadrant");
        }   
    }
    return 0;
}
