#include <stdio.h>

int main() {
    int i, j, n;

    // Input the size of the rhombus
    printf("Enter the size of the rhombus: ");
    scanf("%d", &n);

    // Outer loop: Iterate through each row of the rhombus
    for (i = 0; i < n; i++) {
        // Inner loop 1: Print leading spaces before the asterisks
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Inner loop 2: Print asterisks or spaces based on conditions
        for (j = 0; j < n; j++) {
            // Check conditions to print an asterisk (*) or a space
            if ((i == 0) || (i == n - 1) || (j == 0) || (j == n - 1)) {
                printf("*");  // Print an asterisk for the boundary of the rhombus
            } else {
                printf(" ");  // Print a space for the inner part of the rhombus
            }
        }

        // Move to the next line after completing each row
        printf("\n");
    }

    return 0;
}
