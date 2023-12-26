#include <stdio.h>

int main() {
    int i, j, n, array[100], temp;

    // Input: How many numbers do you want to store?
    printf("How many numbers do you want to store? : ");
    scanf("%d", &n);

    // Input: Enter the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Input: Number of positions to left rotate
    printf("Enter the number of positions to left rotate: ");
    scanf("%d", &temp);

    // Perform left rotation without using a function
    for (i = 0; i < temp; i++) {
        int firstElement = array[0];

        for (j = 0; j < n - 1; j++) {
            array[j] = array[j + 1];
        }

        array[n - 1] = firstElement;//Place firstElement at the end.
    }

    // Output: Display the rotated array
    printf("Array after left rotation by %d positions: ", temp);
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
