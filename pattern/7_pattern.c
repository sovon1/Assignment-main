#include<stdio.h>

int main() {
    int i, j, n;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Outer loop: Iterate through each row
    for (i = 0; i < n; i++) {
        // Inner loop: Iterate through each column in the current row
        for (j = 0; j < n; j++) {
            // Check conditions to decide whether to print an asterisk or a space
            if (i == j || i > j) {
                printf("*");  // Print an asterisk if i is equal to or greater than j
            } else {
                printf(" ");  // Print a space otherwise
            }
        }
        printf("\n");  // Move to the next line after completing each row
    }

    return 0;
}
