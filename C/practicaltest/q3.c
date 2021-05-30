#include<stdio.h>
#include<stdlib.h>

int values_under_100(int * values, int size, int ** memory){

    int counter, i;

    counter = 0;

    int * dest_memory = (int *) malloc(sizeof(int)*size);

    for(i = 0; i < size; i++){
        if (values[i] < 100) {
            dest_memory[counter] = values[i];
            counter++;
        }
        // printf("%d, ", values[i]);
    }

    *memory = dest_memory;

    return counter;
}

int main(void){

    int *values, *memory;
    int size, i;

    size = 0;

    printf("how many values would to like to input: ");
    scanf("%d", &size);

    values = malloc(sizeof(int)*size);

    for (i = 0; i < size; i++){
        printf("Enter a number: ");
        scanf("%d", &values[i]);
    }

    printf("\nThe numbers you entered you entered\n");

    for(i=0;i<size-1;i++){
        printf("%d, ", values[i]);
    }

    printf("%d\n", values[size-1]);

    // call the function 
    int count = values_under_100(values, size, &memory);
    
    printf("\nThere are %d values under 100\n", count);

    printf("\nthe values less than 100 were: ");

    for(i = 0; i < count-1; i++){
        printf("%d, ", memory[i]);
    }

    printf("%d\n", memory[count-1]);

    free(values);
    free(memory);

    return 0;

}