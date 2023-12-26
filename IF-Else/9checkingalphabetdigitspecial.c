#include <stdio.h>

int main() {
    char ch;
    printf("Enter anything : ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Your given input is an alphabet.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("It's a digit.\n");
    } else {
        printf("It's a special character.\n");
    }

    return 0;
}
