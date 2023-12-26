//subtracting two matrix
#include<stdio.h>
int main()
{
    int i,j,A[10][10],B[10][10],C[10][10],numOfRows,numOfCols;

    printf("how many rows and columns? : ");
    scanf("%d %d",&numOfRows,&numOfCols);
    
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
    //scanning B matrix
    for(i=0;i<numOfRows;i++)
    {
        for(j=0;j<numOfCols;j++)
        {
                 printf("Enter B[%d][%d] : ",i,j);
                 scanf("%d",&B[i][j]);

        }
        printf("\n");
    }
    //subtracting two matrix 

    for(i=0;i<numOfRows;i++)
    {
        for(j=0;j<numOfCols;j++)
        {
                C[i][j]=A[i][j] - B[i][j];

        }
    }
    //printing subtracting matrix


printf("A-B = ");
    for(i=0;i<numOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numOfCols;j++)
        {
                 printf("%d  ",C[i][j]);
                 

        }
        printf("\n");
        
    }

    
    return 0;
}