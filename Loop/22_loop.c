//finding the factors of a number

#include<stdio.h>
int main()
{

int i,n;
printf("enter a number to find the factor : ");
scanf("%d",&n);
printf("The factors of %d are : \n\n",n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
        printf("%d ",i);
    }


}


    return 0;
}