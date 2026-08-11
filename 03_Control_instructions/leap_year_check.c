#include <stdio.h>

// Program to check whether a given year is a leap year or not.

int main() {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year <= 0) {
        printf("Please enter a valid year\n");
    }
    else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
