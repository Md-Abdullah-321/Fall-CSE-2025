/**
 * Title: Check Equal Numbers
 * Description: This program checks if two input numbers are equal or not.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a == b)
        printf("Numbers are equal");
    else
        printf("Numbers are not equal");

    return 0;
}
