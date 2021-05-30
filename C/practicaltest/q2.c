#include<stdio.h>

int values_under_100(int *values, int size){

    int counter, i;

    counter = 0;

    for(i = 0; i < size; i++){
        if (values[i] < 100) {
            counter++;
        }
        // printf("%d, ", values[i]);
    }

    return counter;
}

int main(void){

    int values[6]={-1,200,400,5,-3,600};
    int size=6;

    // call the function 
    int count = values_under_100(values, size);
    
    printf("There are %d values under 100\n", count);

    return 0;

}