/*C program to check vowel or
consonant using switch case */

#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);


    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;

    default :
        printf("Consonant");
    }
    return 0;
}
