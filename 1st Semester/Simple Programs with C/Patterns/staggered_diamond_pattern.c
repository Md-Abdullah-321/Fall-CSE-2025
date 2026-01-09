/**
 * Title: Staggered Diamond Pattern
 * Description: This program prints a staggered diamond pattern of numbers based on user input.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */


 #include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows for half diamond: ");
    scanf("%d", &n);

    // Upper half
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf("  "); // Spaces
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("%d ", j); // Print numbers instead of *
        }
        printf("\n");
    }

    // Lower half
    for(i = n - 1; i >= 1; i--) {
        for(j = 1; j <= n - i; j++) {
            printf("  "); // Spaces
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("%d ", j); // Print numbers instead of *
        }
        printf("\n");
    }

    return 0;
}
