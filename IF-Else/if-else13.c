#include <stdio.h>

int main() {
    int tk, tk1000, tk500, tk100, tk50, tk20, tk10, tk5, tk2, tk1;

    printf("Enter the amount: ");
    scanf("%d", &tk);

    if (tk >= 1000) {
        tk1000 = tk / 1000;
        tk = tk % 1000;
    }
    if (tk >= 500) {
        tk500 = tk / 500;
        tk = tk % 500;
    }
    if (tk >= 100) {
        tk100 = tk / 100;
        tk = tk % 100;
    }
    if (tk >= 50) {
        tk50 = tk / 50;
        tk = tk % 50;
    }
    if (tk >= 20) {
        tk20 = tk / 20;
        tk = tk % 20;
    }
    if (tk >= 10) {
        tk10 = tk / 10;
        tk = tk % 10;
    }
    if (tk >= 5) {
        tk5 = tk / 5;
        tk = tk % 5;
    }
    if (tk >= 2) {
        tk2 = tk / 2;
        tk = tk % 2;
    }
    if (tk >= 1) {
        tk1 = tk / 1;
        tk = tk % 1;
    }

    printf("Total number of notes = \n");
    printf("1000tk note = %d\n", tk1000);
    printf("500tk note= %d\n", tk500);
    printf("100tk note= %d\n", tk100);
    printf("50tk note = %d\n", tk50);
    printf("20tk note = %d\n", tk20);
    printf("10tk note = %d\n", tk10);
    printf("5tk note = %d\n", tk5);
    printf("2tk note = %d\n", tk2);
    printf("1tk note = %d\n", tk1);

    return 0;
}
