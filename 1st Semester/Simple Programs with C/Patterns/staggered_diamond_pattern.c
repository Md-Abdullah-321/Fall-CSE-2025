/**
 * Title: Staggered Diamond Pattern
 * Description: Prints a staggered diamond pattern of numbers.
 * Author: Md Abdullah
 * Date: 08/01/2026
 *
 * Sample Input:
 * Enter number of rows for half diamond: 4
 *
 * Sample Output:
 *       1
 *     1 2 3
 *   1 2 3 4 5
 * 1 2 3 4 5 6 7
 *   1 2 3 4 5
 *     1 2 3
 *       1
 */

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows for half diamond: ");
    scanf("%d", &n);

    // Upper half
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("  "); // Spaces
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
