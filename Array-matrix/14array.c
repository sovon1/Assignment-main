//deleting the array
#include<stdio.h>

int main() {
    int i, j, n, array[100], freq[100], count = 0;

    // Input: How many numbers do you want to store?
    printf("How many numbers do you want to store? : ");
    scanf("%d", &n);

    // Input: Enter the elements of the array and initialize frequencies
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        freq[i] = 1;  // Initialize frequencies to 1
    }
      int  totalNumberofDuplicateElements = 0;
    // Loop to find frequencies of each element
    for (i = 0; i < n; i++) {
        if (freq[i] == 0)
            continue;
            /*Conditional Check: The if (freq[i] == 0) line checks whether the frequency of the element at position i is already marked as counted. If the frequency is 0, it means that the element at position i has already been encountered earlier in the outer loop, and its frequency has already been counted.

continue Statement: If the condition freq[i] == 0 is true, the continue statement is executed. The continue statement skips the rest of the code inside the outer loop for the current iteration and proceeds to the next iteration of the outer loop.

Purpose: This line ensures that if an element at position i has already been encountered and its frequency has been counted in a previous iteration of the outer loop, the program skips the current iteration of the outer loop. This helps in avoiding unnecessary redundant calculations and improves efficiency.

In summary, this line prevents the program from re-evaluating the frequency of an element if its frequency has already been calculated in a previous iteration of the outer loop.*/
 
        for (j = i + 1; j < n; j++) {
            if (freq[j] == 0)
                continue;

            // Check for duplicate elements
            if (array[i] == array[j]) {
                freq[i]++;    // Increment frequency for the first occurrence
                freq[j] = 0;// Mark the duplicate occurrence as counted
                 
                
                 
                 totalNumberofDuplicateElements++;

                 for(int k=j;k<n-1;k++)//n - 1. It effectively shifts all the elements to the left by one position, overwriting the duplicate element with the next element in the array.
                 //This for loop starts at the index j (where the duplicate element was found) and iterates until n - 1
                 {
                    array[k]=array[k+1];
                    //This adjustment is made to the loop control variable j. After removing a duplicate element, you want to recheck the current position (j) because the element that was at index j + 1 has now been shifted to index j. Decrementing j ensures that the same position is rechecked in the next iteration of the outer loop.


                 }
                 n--;
                    j--;////This adjustment is made to the loop control variable j. After removing a duplicate element, you want to recheck the current position (j) because the element that was at index j + 1 has now been shifted to index j. Decrementing j ensures that the same position is rechecked in the next iteration of the outer loop.
            }
        }
    }
    printf("new array after deletation duplicate : "); 
    for(i=0;i<n;i++)
   {
    printf("%d ",array[i]);
   }
     printf("total number of duplicate elemets is : %d",totalNumberofDuplicateElements);
    return 0;
}
