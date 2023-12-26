#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the size: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == n / 2 || j == n / 2) {
                printf("+");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

