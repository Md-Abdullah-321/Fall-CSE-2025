/**
 * Title: Largest of Two Numbers
 * Description: This program finds the largest number between two user-input integers.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */


#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("Largest: %d", a);
    else
        printf("Largest: %d", b);

    return 0;
}
