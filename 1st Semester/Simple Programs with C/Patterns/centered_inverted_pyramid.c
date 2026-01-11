/**
 * Title: Centered Inverted Pyramid Pattern
 * Description: Prints a centered inverted pyramid pattern of numbers.
 * Author: Md Abdullah
 * Date: 08/01/2026
 *
 * Sample Input:
 * Enter number of rows: 4
 *
 * Sample Output:
 * 1 2 3 4 5 6 7
 *   1 2 3 4 5
 *     1 2 3
 *       1
 */

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {   // Rows decreasing
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print numbers
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
