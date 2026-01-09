/**
 * Title: Smallest of Two Numbers
 * Description: This program finds the smallest number between two user-input integers.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a < b)
        printf("Smallest: %d", a);
    else
        printf("Smallest: %d", b);

    return 0;
}
