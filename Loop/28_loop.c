//finding sum of all prime numbers 
#include<stdio.h>

int main() {
    int i,j, n;
    int sum = 0;
    printf("find prime numbers from 1 to ? : ");
    scanf("%d", &n);

    
    for (i = 2; i <= n; i++) {
        int isprime = 1;


        for(j=2;j<i;j++)
        {
        if (i%j == 0) {
            isprime =0;
            break;
        }
        }
        if (isprime == 1)
        {printf("%d\n",i);
        sum = sum+i;}
    }


    printf("\n\nthe sum of all prime numbers from 1 to %d is %d",n,sum);


    
   

    return 0;
}
