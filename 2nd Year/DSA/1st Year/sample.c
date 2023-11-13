#include <stdio.h>
#include <stdbool.h>
#include <time.h>

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

int main() {
    int day, month, year;
    struct tm tm = {0};
    time_t t;
    char buffer[11];

    printf("Enter date in DD MM YYYY format: ");
    scanf("%d %d %d", &day, &month, &year);

    if (!isValidDate(day, month, year)) {
        printf("The entered date is invalid.\n");
        return -1;
    }

    tm.tm_mday = day;
    tm.tm_mon = month;
    tm.tm_year = year;

    t = mktime(&tm);
    tm = *localtime(&t);

    strftime(buffer, sizeof(buffer), "%A", &tm);

    printf("The entered date is valid.\n");
    printf("The day is %s.\n", buffer);

    return 0;
}
