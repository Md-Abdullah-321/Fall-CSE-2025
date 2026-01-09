/**
 * Title: Centered Inverted Pyramid Pattern
 * Description: This program prints a centered inverted pyramid pattern of numbers based on user input.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {  // Rows decreasing
        // Print leading spaces
        for(j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // Print numbers
        for(j = 1; j <= 2*i - 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

