/*8. Write a program to add, subtract and multiply two complex numbers using structures to function.*/

#include <stdio.h>

struct complex
{
    int real;
    int image;
}complexn[2];

int main()
{
    for (size_t i = 0; i < 2; i++)
    {
        printf("Enter the complex number %d:\n",i+1);
        printf("Enter Real part :");
        scanf("%d",&complexn[i].real);
        printf("Enter Imaginary part :");
        scanf("%d",&complexn[i].image);
    }
    //Addition
    int sum_i=0,sum_r=0,rem;
    int a =complexn[0].real, b=complexn[0].image,c=complexn[1].real,d=complexn[1].image;
    sum_i += b+d;
    sum_r += a+c;
    printf("Sum of Complex Number is : %d+%di\n",sum_r,sum_i);
    //Difference
    int diff_r = complexn[0].real-complexn[1].real;
    int diff_i = complexn[0].image-complexn[1].image;
    printf("Diiference of Complex Number is : %d+%di\n",diff_r,diff_i);
    //Multiplication
    int mreal = a*c-b*d;
    int mimage = a*d+b*c;
    printf("Multiplied Comlex Number is %d+%di\n",mreal,mimage);
    return 0;
}

