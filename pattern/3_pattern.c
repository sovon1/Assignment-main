#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the size of the rhombus: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 0; j < n; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
