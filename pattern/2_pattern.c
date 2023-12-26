#include <stdio.h>

int main() {
    int i, j, n;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Generate the pattern
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Check conditions for printing asterisk or space
            if (i == j || i + j == n - 1 || i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
