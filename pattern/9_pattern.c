
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if( (i+j==n-1) || (i==0) ||  (j==0))
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
        }
        printf("\n");
    }
}
