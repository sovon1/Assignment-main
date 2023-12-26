//sum of main diagonal 

#include<stdio.h>
int main()
{
    int i,j,A[10][10],sum,numOfRows,numOfCols;

    printf("how many rows and columns? : ");
    scanf("%d %d",&numOfRows,&numOfCols);

     while(numOfRows!=numOfCols)
    {
        printf("diagonal possible only for square matrix \n");

     printf("how many rows and columns? : ");
    scanf("%d %d",&numOfRows,&numOfCols);
    }
    
    //scanning A matrix
    for(i=0;i<numOfRows;i++)
    {
        for(j=0;j<numOfCols;j++)
        {
                 printf("Enter A[%d][%d] : ",i,j);
                 scanf("%d",&A[i][j]);

        }
        printf("\n");
    }


    printf("Enterd matrix : \n ");

    for(i=0;i<numOfRows;i++)
    {
       for(j=0;j<numOfCols;j++)
       {
 
          printf("%d  ",A[i][j]);

       }
       printf("\n");


    }
    
    



//sum of major diagonal
sum = 0;
    
    for(i=0;i<numOfRows;i++)
    {

        for(j=0;j<numOfCols;j++)
        {
            
             if(i==j)
             {
                sum = sum + A[i][j];
             }

        }
    }
    printf("Sum of major diagonal is : %d",sum);

    
    return 0;
}