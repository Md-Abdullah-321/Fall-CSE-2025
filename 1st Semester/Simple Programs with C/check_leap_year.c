/**
 * Title: Check Leap Year
 * Description: This program checks if a given year is a leap year or not.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year", year);
    else
        printf("%d is not a Leap Year", year);

    return 0;
}
