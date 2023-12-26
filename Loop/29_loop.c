#include<stdio.h>

int main() {
    int i, j, n;
    printf("Enter number  : ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            int isPrime = 1;

            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            

            if (isPrime == 1) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
