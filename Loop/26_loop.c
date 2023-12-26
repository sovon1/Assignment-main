#include<stdio.h>

int main() {
    int i, n;
    printf("Enter a number to check whether it is prime or not: ");
    scanf("%d", &n);

    int count = 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0)
        printf("It's a prime number\n");
    else 
        printf("It's not a prime number\n");

    return 0;
}
