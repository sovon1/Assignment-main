//calculate the number of frequencies in a given array
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
                freq[j] = 0;  // Mark the duplicate occurrence as counted
            }
        }
    }

    // Output: Display frequencies of each unique element
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("\n Frequencies of %d is %d \n", array[i], freq[i]);
        }
    }

    return 0;
}
