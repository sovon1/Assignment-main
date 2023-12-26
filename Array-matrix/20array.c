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

    // Separate even and odd elements
    int evenCount = 0, oddCount = 0;
    int evenArray[100], oddArray[100];

    for (i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            evenArray[evenCount++] = array[i];
        } else {
            oddArray[oddCount++] = array[i];
        }
    }

    // Bubble Sort Algorithm for even elements
    for (i = 0; i < evenCount - 1; i++) {
        int flag = 0;
        for (j = 0; j < evenCount - 1 - i; j++) {
            if (evenArray[j] > evenArray[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = evenArray[j];
                evenArray[j] = evenArray[j + 1];
                evenArray[j + 1] = temp;
                flag = 1;
            }
        }

        // If no swapping occurred, the array is already sorted
        if (flag == 0) {
            break;
        }
    }

    // Bubble Sort Algorithm for odd elements
    for (i = 0; i < oddCount - 1; i++) {
        int flag = 0;
        for (j = 0; j < oddCount - 1 - i; j++) {
            if (oddArray[j] > oddArray[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = oddArray[j];
                oddArray[j] = oddArray[j + 1];
                oddArray[j + 1] = temp;
                flag = 1;
            }
        }

        // If no swapping occurred, the array is already sorted
        if (flag == 0) {
            break;
        }
    }

    // Output: Display the sorted even array
    printf("Sorted even array in ascending order: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenArray[i]);
    }

    // Output: Display the sorted odd array
    printf("\nSorted odd array in ascending order: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArray[i]);
    }

    return 0;
}
