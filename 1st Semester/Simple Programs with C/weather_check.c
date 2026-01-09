/**
 * Title: Weather Check
 * Description: This program checks the weather condition based on user input ('r' for rainy and 's' for sunny).
 * Author: Md Abdullah
 * Date: 08/01/2026
 */


#include <stdio.h>

int main() {
    char weather;
    printf("Enter 'r' for rainy or 's' for sunny: ");
    scanf(" %c", &weather);

    if(weather == 'r' || weather == 'R')
        printf("Today will be rainy");
    else if(weather == 's' || weather == 'S')
        printf("Today will be sunny");
    else
        printf("Invalid input");

    return 0;
}
