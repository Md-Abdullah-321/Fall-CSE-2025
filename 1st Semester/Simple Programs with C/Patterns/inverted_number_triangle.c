/**
 * Title: Inverted Number Triangle
 * Description: This program prints an inverted triangle pattern of numbers based on user input.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */

#include <stdio.h>
int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}