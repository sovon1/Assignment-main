#include<stdio.h>

int main() {
    int num, originalNum, rem, count = 0, result = 0;

    printf("Enter a number to check Armstrong number: ");
    scanf("%d", &num);

    originalNum = num;

    // Counting digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++count;
    }

    originalNum = num;

    // Calculating Armstrong number
    while (originalNum != 0) {
        rem = originalNum % 10;
        int multi = 1;

        // Calculating digit raised to the power of count
        for (int i = 0; i < count; ++i) {
            multi *= digit;
        }

        result += multi;
        originalNum /= 10;
    }

    // Checking if it's an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
