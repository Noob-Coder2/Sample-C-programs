/*13. Let us work on the menu of a library. Create a structure containing book information like accession number, name of author,
book title and flag to know whether book is issued or not. Create a menu in which the following can be done.
 1 - Display book information
 2 - Add a new book
 3 - Display all the books in the library of a particular author
 4 - Display the number of books of a particular title
 5 - Display the total number of books in the library
 6 - Issue a book
 (If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1)*/

#include <stdio.h>

struct library
{
    int acsno;
    char nauthor[10];
    char btitle[15];
    int flag;
} l[5];

void display(int n) // n = number of books
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\n", l[i].acsno, l[i].btitle, l[i].nauthor);
    }
    printf("\nReturning to option menu :");
    option(n);
}

void sauthor(int n)
{
    char auth[10];
    printf("Enter the name of author : ");
    scanf_s("%s", auth);
    for (size_t i = 0; i < n; i++)
    {
        if (l[i].nauthor == auth)
        {
            printf("%d\t%s\n", &l[i].acsno, l[i].btitle);
        }
    }
    printf("\nReturning to option menu :");
    option(n);
}

void add(int n)
{
    printf("Enter the details of book :\n");
    printf("Enter accession number :");
    scanf("%d", &l[n].acsno);
    printf("Enter book title :");
    scanf_s("%s", l[n].btitle);
    printf("Enter the Book's Author :");
    scanf_s("%s", l[n].nauthor);
    l[n].flag = 0;
    n++;
    printf("Returning to option menu :");
    option(n);
}

void stitle(int n)
{
    int c = 0;
    char title[10];
    printf("Enter the name of title : ");
    scanf_s("%s", title);
    for (size_t i = 0; i < n; i++)
    {
        if (l[i].nauthor == title)
        {
            c++;
        }
    }
    printf("Number of books of title %s = %d\n", title, c);
    printf("Returning to option menu :\n");
    option(n);
}

void tbooks(int n)
{
    printf("Total Number of Books are %d\n", n);
    printf("Returning to option menu :\n");
    option(n);
}

void issue(int n)
{
    int an, i;
    printf("Enter the accession number : ");
    scanf("%d", an);
    for (size_t i = 0; i < n; i++)
    {
        if (l[i].acsno == an)
        {
            if (l[i].flag == 0)
            {
                l[i].flag = 1;
                printf("Book is being Issued.");
                break;
            }
            else
            {
                printf("Book already Issued");
                break;
            }
        }
        else
        {
            printf("Book not found");
        }
    }
    printf("\nReturning to option menu :");
    option(n);
}

void option(n)
{
    int opt;
    printf("Press \
    1 - Display book information\
    2 - Add a new book\
    3 - Display all the books in the library of a particular author\
    4 - Display the number of books of a particular title\
    5 - Display the total number of books in the library\
    6 - Issue a book\
    ");
    scanf("%d",opt);
    switch (opt)
    {
    case 1:
        display(n);
        break;
    
    case 2:
        add(n);
        break;
    case 3:
        sauthor(n);
        break;
    case 4:
        stitle(n);
        break;
    case 5:
        tbooks(n);
        break;
    case 6:
        issue(n) ;
        break;
    
    default:
        printf("------Wrong Option--------");
        printf("-----Exiting the program-----");
        break;
    }
    
}

int main()
{
    int n;
    printf("Enter the Number of Books: ");
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter the details of book :\n");
        printf("Enter accession number :");
        scanf("%d", &l[i].acsno);
        printf("Enter book title :");
        scanf_s("%s", l[i].btitle);
        printf("Enter the Book's Author :");
        scanf_s("%s", l[i].nauthor);
        l[i].flag = 0;
    }
    option(n);
    return 0;
}


