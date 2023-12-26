#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the size : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        for (j = 0; j < i; j++) {
            printf(" ");
        }


        for (j = 0; j < 2 * (n - i) - 1; j++) {
            if (j == 0 || j == 2 * (n - i) - 2 || i == n - 1 || i==0 ) {

                printf("*");
            } else {

                printf(" ");
            }
        }


        printf("\n");
    }

    return 0;
}
