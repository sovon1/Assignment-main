// c program to print A to Z uning while loop
#include<stdio.h>

int main()
{
    int i =1;
    while(i<=26)
    {
    printf ("\n %c",i+64);
    i++;
    }
  return 0;
}

/*
#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("Alphabets from a - z are: \n");
    while(ch<='z')
    {
        printf("%c\n", ch);
        ch++;
    }

    return 0;
}




#include <stdio.h>

int main()
{
    int ch = 97;

    printf("Alphabets from a - z are: \n");
    while(ch<=122)
    {
        printf("%c\n", ch);
        ch++;
    }

    return 0;
}
*/