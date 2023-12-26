//printing all prime numbers 
#include<stdio.h>

int main() {
    int i,j, n;
    printf("find prime numbers from 1 to ? : ");
    scanf("%d", &n);

    
    for (i = 2; i <= n; i++) {
        int isprime = 1;


        for(j=2;j<i/2;j++)
        {
        if (i%j == 0) {
            isprime =0;
            break;
        }
        }
        if (isprime == 1)
        printf("%d\n",i);
    }

    
   

    return 0;
}
