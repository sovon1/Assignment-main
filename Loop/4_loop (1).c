// c program to print even numbers uning while loop
#include<stdio.h>

int main()
{
    int i =1;
    while(i<=100)
    {
    if(i%2==0)
    printf ("\n %d",i);
    i++;
    }
  return 0;
}


/*

#include <stdio.h>

int main()
{
    int i, n;
  
     Input upper limit of even number from user
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are: \n", n);

    i=2; // Since 2 is the first even number
    while(i<=n)
    {
        printf("%d\n", i);

        
          
        i += 2;
    }

    return 0;
}
*/