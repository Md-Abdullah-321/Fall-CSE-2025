/**
 * Title: Fibonacci Series
 * Description: This program checks if a number is part of the Fibonacci series through array using C.
 * Explaination: The program generates the Fibonacci series up to 'n' terms and stores them in an array.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */


#include <stdio.h>

int main() {
    int n, i;
    int fib[100];

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Fibonacci Series:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}

