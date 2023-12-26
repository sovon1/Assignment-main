// multiplication table
#include<stdio.h>

int main()
{
    int n, i;
    printf("for which number you want to find the multiplication table: ");
    
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    printf (" \n %d x %d = %d",n,i,n*i);
    }
  return 0;
}
