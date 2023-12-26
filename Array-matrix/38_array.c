#include <stdio.h>

int main() {
    int i, j, A[10][10], numOfRowsCols;

    printf("Enter the number of rows and columns: ");
    scanf("%d", &numOfRowsCols);

    // Input matrix
    printf("Enter the matrix elements:\n");
    for (i = 0; i < numOfRowsCols; i++) {
        for (j = 0; j < numOfRowsCols; j++) {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entered matrix:\n");
    for (i = 0; i < numOfRowsCols; i++) {
        for (j = 0; j < numOfRowsCols; j++) {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }
    int isIdentity = 1;
for (i = 0; i < numOfRowsCols; i++) {
    for (j = 0; j < numOfRowsCols; j++) {
        if (i == j && A[i][j] != 1) {
            isIdentity = 0;
            break;
        } else if (i != j && A[i][j] != 0) {
            isIdentity = 0;
            break;
        }
    }
    if (!isIdentity)//0 checking
     {
        break;
    }
}

if (isIdentity) {
    printf("It's an identity matrix\n");
} else {
    printf("It is not an identity matrix\n");
}
return 0;
}
/*
If i is equal to j (i.e., we are on the diagonal), we check if the corresponding matrix element is 1.
If it's not 1, we set isIdentity to 0, indicating that the matrix is not an identity matrix.
We break out of the loop since further checks are unnecessary.


If i is not equal to j (i.e., we are off the diagonal), we check if the corresponding matrix element is 0.
If it's not 0, we set isIdentity to 0, indicating that the matrix is not an identity matrix.
We break out of the loop since further checks are unnecessary.


lastly, we check the value of isIdentity. If it's still 1, we print that the matrix is an identity matrix. If it's 0, we print that it's not an identity matrix.




*/