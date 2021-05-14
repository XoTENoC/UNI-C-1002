#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int sum[20], n, i, j, sum_index, pos_index, difference;
    float number;
    
    printf("How many numbers do you want in the array? ");
    scanf("%d", &n);
    
    int pos[n], max[n];
    
    pos_index = 0;
    
    for (i=0; i<n; i++) {
        printf("Please enter value number %d: ", i+1);
        scanf("%f", &number);
        
        pos[pos_index] = number;
        pos_index++;
    }
    
    sum_index = 0;
    
    for (i=0; i<n; i++) {
        difference = 0;
        max[i] = 0;
        for (j=0; j<n; j++) {
            if (i==j) {
            } else {
                if (max[i]<(abs(pos[j] - pos[i]))) {
                    max[i] = abs(pos[j] - pos[i]);
                }
                difference = difference + abs(pos[j] - pos[i]);
            }
        }
        sum[i] = difference;
    }
    
    printf("You array was: ");
    for (i=0; i<n; i++) {
        printf("%d ", pos[i]);
    }
    
    printf("\n The difference between elemnts in you array are: ");
    for (i=0; i<n; i++) {
        printf("%d ", sum[i]);
    }
    
    printf("\n The greatest difference for each element is: ");
    for (i=0; i<n; i++) {
        printf("%d ", max[i]);
    }
    printf("\n");
    
}
