//multiplying two matrix
#include<stdio.h>
int main()
{
    int i,j,k,A[10][10],B[10][10],multiplied[10][10],sum,numOfRows1,numOfCols1,numOfRows2,numOfCols2;

    printf("how many rows and columns for the first matrix? : ");
    scanf("%d %d",&numOfRows1,&numOfCols1);

    printf("how many rows and columns for the second matrix? : ");
    scanf("%d %d",&numOfRows2,&numOfCols2);

    while(numOfCols1!=numOfRows2)
    {

        printf("This matrix can't be multiplied due to matrix multiplication codition\n");
        printf("how many rows and columns for the first matrix? : ");
    scanf("%d %d",&numOfRows1,&numOfCols1);

    printf("how many rows and columns for the second matrix? : ");
    scanf("%d %d",&numOfRows2,&numOfCols2);
    }
    
    //scanning A matrix
    printf("Enter A matrix  : \n");
    for(i=0;i<numOfRows1;i++)
    {
        for(j=0;j<numOfCols1;j++)
        {
                 printf("Enter A[%d][%d] : ",i,j);
                 scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    //scanning B matrix
    printf("Enter B matrix :\n");
    for(i=0;i<numOfRows2;i++)
    {
        for(j=0;j<numOfCols2;j++)
        {
                 printf("Enter B[%d][%d] : ",i,j);
                 scanf("%d",&B[i][j]);

        }
        printf("\n");
    }
    //multiplying two matrix 
    sum=0;

    for(i=0;i<numOfRows1;i++)
    {
        for(j=0;j<numOfCols2;j++)
        {
            for(k=0;k<numOfCols1;k++)//caution here
            {
                sum=sum+A[i][k]*B[k][j];
                
            }
            multiplied[i][j]=sum;
                sum=0;
        }
    }
    
//printing multiplied matrix
printf("A*B = ");
    for(i=0;i<numOfRows1;i++)
    {
        printf("\t");
        for(j=0;j<numOfCols2;j++)
        {
                 printf("%d  ",multiplied[i][j]);
                 

        }
        printf("\n");
        
    }

    
    return 0;
}