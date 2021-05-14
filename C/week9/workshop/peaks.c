#include <stdio.h>

int main(void) {
    int peaks[10], peaks_index, i, n, vals_index;
    float number;
    
    printf("How many numbers do you want in the array? ");
    scanf("%d", &n);
    
    int vals[n];
    
    vals_index = 0;
    
    for (i=0; i<n; i++) {
        printf("Enter value number %d: ", i+1);
        scanf("%f", &number);
        
        vals[vals_index] = number;
        vals_index++;
    }
    
    peaks_index=0;
    
    for (i=0; i<n; i++) {
        if (i==0) {
        } else if (vals[i]>vals[i+1] && vals[i]>vals[i-1]) {
            peaks[peaks_index] = vals[i];
            peaks_index++;
        }
    }
    
    if (peaks_index==0) {
        printf("<no peaks>");
    } else {
        for (i=0; i<peaks_index; i++) {
            printf("%d ", peaks[i]);
        }
    }
    printf("\n");
}
