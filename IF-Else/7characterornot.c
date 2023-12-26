/**
 * C program to check whether a character is alphabet or not
 */
#include<stdio.h>
int main()
{
  char ch; //disclaimer : you used int
  printf("Enter an alphabet : ");
  scanf("%c",&ch);
  if((ch>='a'&& ch<='z' ) || (ch>='A'&& ch<='Z'))
  //if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
  printf("it's an alphabet");
  else 
  printf("Not an alphabet");



    return 0;
}