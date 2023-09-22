/*#include <stdio.h>

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}

int main()
{
    int day, month, year;
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    int dayOfWeek = dayofweek(day, month, year);
    printf ("Day of week is %d\n", dayOfWeek);
    dayOfWeek == 6?printf("Sunday"):printf("No");

    return 0; 
}*/


/*#include <stdio.h>
#include <time.h>

int main(void) {
    int day, month, year;
    struct tm tm = {0};
    time_t t;
    char buffer[11];

    printf("Enter date in DD MM YYYY format: ");
    scanf("%d %d %d", &day, &month, &year);

    tm.tm_mday = day;
    tm.tm_mon = month - 1;
    tm.tm_year = year - 1900;

    t = mktime(&tm);

    if (t == -1) {
        printf("The entered date is invalid.\n");
        return -1;
    }

    strftime(buffer, sizeof(buffer), "%A", &tm);

    if (day != tm.tm_mday || month != tm.tm_mon + 1 || year != tm.tm_year + 1900) {
        printf("The entered date is invalid.\n");
        return -1;
    }

    printf("The entered date is valid.\n");
    printf("The day is %s.\n", buffer);

    return 0;
}*/
//Using Zeller's Algorithm
#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

bool isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    if (day > daysInMonth[month]) {
        return false;
    }

    return true;
}

int main(void) {
    int day, month, year;
    int h, q, m, k, j;

    printf("Enter date in YYYY-MM-DD format: ");
    scanf("%d-%d-%d", &year, &month, &day);

    if (!isValidDate(day, month, year)) {
        printf("The entered date is invalid.\n");
        return -1;
    }

    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }

    q = day;
    m = month;
    k = year % 100;
    j = year / 100;

    h = (q + 13*(m+1)/5 + k + k/4 + j/4 + 5*j) % 7;

    printf("The entered date is valid.\n");

    switch(h) {
        case 0:
            printf("The day is Saturday.\n");
            break;
        case 1:
            printf("The day is Sunday.\n");
            break;
        case 2:
            printf("The day is Monday.\n");
            break;
        case 3:
            printf("The day is Tuesday.\n");
            break;
        case 4:
            printf("The day is Wednesday.\n");
            break;
        case 5:
            printf("The day is Thursday.\n");
            break;
        case 6:
            printf("The day is Friday.\n");
            break;
    }

    return 0;
}

