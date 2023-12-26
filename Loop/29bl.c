#include<stdio.h>

int main() {
    int i, n, j, k, count;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Prime Factors of %d are:\n", n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            count = 0;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    count++;
                    break;  // Break the loop if i has any factor other than 1 and itself
                }
            }

            if (count == 0) {
                
                for (k = 2; k <= i / 2; k++) {
                    if (i % k == 0 && j % k == 0) {
                        count++;
                        break;  // Break the loop if j has any factor other than 1 and itself
                    }
                }

                if (count == 0) {
                    printf("%d\n", i);
                }
            }
        }
    }

    return 0;
}
