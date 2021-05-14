#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    // initializing variables
    int sum[20], n, i, j, sum_index, pos_index, difference;
    float number;
    
    // asking the user for input
    printf("How many numbers do you want in the array? ");
    scanf("%d", &n);

    // creating array with length user wants
    int pos[n];
    
    // counter
    pos_index = 0;
    

    // asking the user for values of the array
    for (i=0; i<n; i++) {
        printf("Please enter value number %d: ", i+1);
        scanf("%f", &number);
        
        // assign number to array
        pos[pos_index] = number;
        pos_index++;
    }
    
    // adding the differences of the positions together

    // counter
    sum_index = 0;
    for (i=0; i<n; i++) {
        difference = 0;
        for (j=0; j<n; j++) {
            if (i==j) {
            } else {
                difference = difference + abs(pos[j] - pos[i]);
            }
        }
        sum[i] = difference;
    }
    
    for (i=0; i<n; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
}
