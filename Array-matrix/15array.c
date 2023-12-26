#include<stdio.h>

int main() {
    int i, n1, n2, m, array1[100], array2[100], arraym[200], count = 0;

    printf("How many numbers do you want to store in the first array? : ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array : ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("How many numbers do you want to store in the second array? : ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array : ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &array2[i]);
    }

    // Merging them in ascending order
    m = n1 + n2;
    int j = 0;
    int k = 0;
    i = 0;

    while (i < n1 && j < n2) {
        if (array1[i] < array2[j]) {
            arraym[k++] = array1[i++];//eksathey baraye dilam ..feeling like a proo
        } else {
            arraym[k++] = array2[j++];
        }
    }

    // If elements are remaining in the first array
    while (i < n1) {
        arraym[k++] = array1[i++];
    }

    // If elements are remaining in the second array
    while (j < n2) {
        arraym[k++] = array2[j++];
    }

    printf("The merged elements in ascending order: ");
    for (i = 0; i < m; i++) {
        printf("%d ", arraym[i]);
    }

    return 0;
}
