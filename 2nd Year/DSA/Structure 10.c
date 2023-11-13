/*10. Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
1 - Write a function to print the names of all the customers having balance less than $200.
2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the
incremented value of their balance.*/

#include <stdio.h>

struct Account
{
    char name[10];
    long long int accno;
    int balance;
} c[3];

void lessbalance(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (c[i].balance < 200)
        {
            printf("%s\n", &c[i].name);
        }
    }
}

void increment(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (c[i].balance > 1000)
        {
            c[i].balance += 100;
            printf("%s\t", &c[i].name);
            printf("%d\n", &c[i].balance);
        }
    }
}

int main()
{
    int n, opt;
    printf("Enter the number of customers : ");
    scanf("%d", n);
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter the Details of Customer %d\n", &i + 1);
        printf("Enter Name : ");
        scanf_s("%s", c[i].name);
        printf("Enter Account Number : ");
        scanf("%lld", &c[i].accno);
        printf("Enter the Balance : ");
        scanf("%d", &c[i].balance);
    }

    printf(" Enter 1 to print the names of all the customers having balance less than $200\n or\n Enter 2 to add $100 in the balance of all the customers having more than $1000 in their balance");
    scanf("%d", &opt);
    if (opt == 1)
    {
        lessbalance(n);
    }
    else if (opt == 2)
    {
        increment(n);
    }
    else
    {
        printf("Wrong Option");
    }
    return 0;
}
