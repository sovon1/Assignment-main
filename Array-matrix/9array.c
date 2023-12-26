#include<stdio.h>

int main() {
    int i, n, array[100], count = 0;

    // Input: How many numbers do you want to store?
    printf("How many numbers do you want to store? : ");
    scanf("%d", &n);

    // Input: Enter the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Output: Display the original array
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    // Input: Position to replace
    printf("\nAt which position do you want to replace? : ");
    scanf("%d", &i);
    if(i<1 || i>n)
    {
    printf("Enter a valid range from 0 to %d\n",n);
    return 1;//exit with an error code
    }
    // Input: Value to replace with
    printf("Replace with what? : ");
    scanf("%d", &array[i-1]);

    // Output: Display the updated array
    printf("New array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
