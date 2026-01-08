/**
 * Title: Largest and Smallest in an Array
 * Description: This program finds the largest and smallest elements in an array of integers.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */

#include <stdio.h>

int main() {
    int arr[100], n, i, largest, smallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}