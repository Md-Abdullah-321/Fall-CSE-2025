/**
 * Title: Even or Odd Checker using Boolean
 * Description: This program checks whether a given integer is even or odd using boolean logic.
 * Author: Md Abdullah
 * Date: 06/01/2026
 */

#include <stdio.h>
#include <stdbool.h>

int main(){
    int number;
    bool isEven;

    printf("Enter an integer: ");
    scanf("%d", &number);

    isEven = (number % 2 == 0);
    if(isEven){
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}