/**
 * Title: Largest of Five Numbers
 * Description: This program finds the largest number among five user-input integers using boolean logic.
 * Author: Md Abdullah
 * Date: 06/01/2026
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int numbers[5];
    int largest;

    printf("Enter five integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("The largest number is: %d\n", largest);
    return 0;
}