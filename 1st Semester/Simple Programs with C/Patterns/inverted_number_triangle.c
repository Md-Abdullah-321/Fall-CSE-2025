/**
 * Title: Inverted Number Triangle
 * Description: Prints an inverted triangle pattern of numbers.
 * Author: Md Abdullah
 * Date: 08/01/2026
 *
 * Sample Input:
 * Enter the number of rows: 4
 *
 * Sample Output:
 * 1 2 3 4
 * 1 2 3
 * 1 2
 * 1
 */

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
