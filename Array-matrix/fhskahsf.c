#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b)
{
    return (*(int *)a-*(int*)b);
}

int main() {
    int i, j, n, array[100], temp;

    // Input: How many numbers do you want to store?
    printf("How many numbers do you want to store? : ");
    scanf("%d", &n);

    // Input: Enter the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    qsort(array,n,sizeof(int),compare);
     for (i = 0; i < n; i++) {
       printf("%d ", array[i]);
    }


}