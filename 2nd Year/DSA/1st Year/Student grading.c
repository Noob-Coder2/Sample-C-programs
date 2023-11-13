#include <stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    float per;
    printf("Enter marks of 5 Subjects:\n");
    scanf("%d""%d""%d""%d""%d",&s1,&s2,&s3,&s4,&s5);
    if((s1>=0 && s1<=100) && (s2>=0 && s2<=100) && (s3>=0 && s3<=100) && (s4>=0 && s4<=100) && (s5>=0 && s5<=100))
    {
        per = (s1+s2+s3+s4+s5)/5;
        if(per>=90 && per<101)
        {
            printf("GRADE A");
        }
        else if(per>=80 && per<90)
        {
            printf("GRADE B");
        }
        else if(per>=70 && per<80)
        {
            printf("GRADE C");
        }
        else
        {
            printf("GRADE D");
        }
    }
    else
    {
        printf("Invalid Input");
    }  
}
