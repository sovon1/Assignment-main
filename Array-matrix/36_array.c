//transpose matrix
#include<stdio.h>
int main()
{
    int i,j,A[10][10],trans[10][10],numOfRows,numOfCols;

    printf("how many rows and columns? : ");
    scanf("%d %d",&numOfRows,&numOfCols);
    
    //scanning  matrix
    for(i=0;i<numOfRows;i++)
    {
        for(j=0;j<numOfCols;j++)
        {
                 printf("Enter A[%d][%d] : ",i,j);
                 scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    printf("A= ");
    for(i=0;i<numOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numOfCols;j++)
        {
                 printf("%d  ",A[i][j]);
                 

        }
        printf("\n");
    }
    
    //transposing matrix 

    for(i=0;i<numOfRows;i++)
    {
        for(j=0;j<numOfCols;j++)
        {
                trans[j][i]=A[i][j];

        }
    }
    //printing trans


    printf("transpose = \n ");
    for(i=0;i<numOfCols;i++)
    {
        printf("\t");
        for(j=0;j<numOfRows;j++)
        {
                 printf("%d  ",trans[i][j]);
                 

        }
        printf("\n");

    }



        
    

    
    return 0;
}