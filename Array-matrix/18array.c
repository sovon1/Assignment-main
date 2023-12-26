#include <stdio.h>

int main() {
    int i, n, search, array[100];

    // Input: How many numbers do you want to store?
    printf("How many numbers do you want to store? : ");
    scanf("%d", &n);

    // Input: Enter the elements of the array
    printf("Enter the elements of the array : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Input: Enter the element to be searched
    printf("Enter the element to be searched : ");
    scanf("%d", &search);

    // Searching for the element
    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("%d found at position %d\n", search, i + 1);
            break;  // Exit the loop if the element is found
        }
    }

    // If the loop completes without finding the element
    if (i == n) {
        printf("%d not found in the array\n", search);
    }

    return 0;
}
