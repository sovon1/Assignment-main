#include<stdio.h>
int main()
{
    int i,num,n,lastdigit,arr[10]={0};
    printf("Enter a number to count individul's frequency : ");
    scanf("%d",&num);
    n = num;//387
    for(i=0;i<10;i++)
    {
    while(n!=0)
    {
       lastdigit=n%10;
       arr[lastdigit]++;
       n = n/10;
       }
    }
       for(i=0;i<10;i++)
       {
        if(arr[i]!=0)

           printf("\n%d >> %d",i,arr[i]);

       }  
        
       


    





    return 0;
}