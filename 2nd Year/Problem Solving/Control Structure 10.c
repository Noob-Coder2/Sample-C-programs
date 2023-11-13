/*Mediclaim Premium of a person is calculated based on following Age Group: 
(Age Group less than 30 Years: Rs. 1000 per Lakh, 
Age Group above 30 years & less than 40 Years: Rs. 1500 per Lakh, 
Age Group above 40 years & less than 50 Years: Rs. 2000 per Lakh, 
Age Group above 50 years & less than 60 Years: Rs. 2500 per Lakh, 
Age Group above 60 years & less than 70 Years: Rs. 3000 per Lakh,  
If the age is 70 years or above, the insurance can not be taken. 
Apart from this if the person is Female, a discount of 20% is given on calculated premium. 
If the person is not married, another discount of 10% is offered. After the discount a GST @18% charged on the calculated premium. 
Given the Date of Birth, Mediclaim Sum Insured, Sex and marital status, calculate the premium to be paid by the person. */
#include <stdio.h>

int main()
{
    int age;
    float premium,mediclaim,discount=0; 
    char sex,marstat;
    printf("Enter age :");
    scanf("%d",&age);
    printf("Enter Sex (M for male and F for female) : ");
    scanf(" %c",&sex);
    printf("Enter Marital Status(M for married and U for unmaried): ");
    scanf(" %c",&marstat);
    printf("Enter the Mediclaim Sum Insured (in Lakh):");
    scanf("%f",&mediclaim);

    if (age<30)
    {
        premium = 1000*mediclaim;
    }
    else if (age>=30 && age<40)
    {
        premium = 1500*mediclaim;
    }
    else if(age>=40 && age <50)
    {
        premium = 2000*mediclaim;
    }
    else if(age>=40 && age <50)
    {
        premium = 2000*mediclaim;
    }
    else if(age>=50 && age <60)
    {
        premium = 2500*mediclaim;
    }
    else if(age>=60 && age <70)
    {
        premium = 3000*mediclaim;
    }
    else
    {
        premium=0;
    }
    if (sex=='F')
    {
        discount = 0.2*premium ;
    }
    if (marstat == 'U')
    {
        discount = 0.1*premium ;
    }
    premium = .82*(premium-discount);

    printf("Premium is %.2f",premium);
    return 0;
}
