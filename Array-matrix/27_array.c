//equality checking between two matrix
#include<stdio.h>
int main()
{
    int i,j,k,A[10][10],B[10][10],numOfRows1,numOfCols1,numOfRows2,numOfCols2;

    printf("how many rows and columns for the first matrix? : ");
    scanf("%d %d",&numOfRows1,&numOfCols1);

    printf("how many rows and columns for the second matrix? : ");
    scanf("%d %d",&numOfRows2,&numOfCols2);

    
    
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
    int equal = 1;
   for(i=0;i<numOfRows1;i++)
   {
    for(j=0;j<numOfCols1;j++)
    {

      if(A[i][j]!=B[i][j])
      {
        equal = 0;
        break;
      }

    }
   }
   if(equal==1)
   {
    printf("Matrices are equal");

   }
   else
   printf("not equal");
   


        
    

    
    return 0;
}