/**
 * Title: Array Elements Printer
 * Description: This program initializes an array with predefined integers and prints each element.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */


 #include <stdio.h>
 
 int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
 }