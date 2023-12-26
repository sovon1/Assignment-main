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

    // Bubble Sort Algorithm with optimized flag
    for (i = 0; i < n - 1; i++) {
        int flag = 0;
        for (j = 0; j <n-1-i; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }

        // If no swapping occurred, the array is already sorted
        if (flag == 0) {
            break;
        }
    }

    // Output: Display the sorted array
    printf("Sorted array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
