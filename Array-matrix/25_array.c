//scalar matrix multiplier
#include<stdio.h>
int main()
{
    int i,j,A[10][10],B[10][10],m,numOfRows,numOfCols;

    printf("how many rows and columns? : ");
    scanf("%d %d",&numOfRows,&numOfCols);
    printf("Enter multiplier : ");
    scanf("%d",&m);
    
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
     

    for(i=0;i<numOfRows;i++)
    {
        for(j=0;j<numOfCols;j++)
        {
                B[i][j]= m*A[i][j];

        }
    }
    



    for(i=0;i<numOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numOfCols;j++)
        {
                 printf("%d  ",B[i][j]);
                 

        }
        printf("\n");
        
    }

    
    return 0;
}