/**
 * Title: Fibonacci Series
 * Description: This program checks if a number is part of the Fibonacci series through array using C.
 * Explaination: The program generates the Fibonacci series up to 'n' terms and stores them in an array.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */


#include <stdio.h>

int main() {
    int totalTerms, termIndex;
    int firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &totalTerms);

    printf("Fibonacci Series:\n");

    for(termIndex = 1; termIndex <= totalTerms; termIndex++) {
        printf("%d ", firstTerm);
        
        nextTerm = firstTerm + secondTerm;  // calculate next term
        firstTerm = secondTerm;             // shift first term to second
        secondTerm = nextTerm;              // update second term
    }

    printf("\n");
    return 0;
}


