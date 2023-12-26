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

    // Input: Number of positions to right rotate
    printf("Enter the number of positions to right rotate: ");
    scanf("%d", &temp);

    // Perform right rotation without using a function
    for (i = 0; i < temp; i++) {
        int lastElement = array[n - 1];

        for (j = n - 1; j > 0; j--) {
            array[j] = array[j - 1];
        }

        array[0] = lastElement; // Place lastElement at the beginning.
    }

    // Output: Display the rotated array
    printf("Array after right rotation by %d positions: ", temp);
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
