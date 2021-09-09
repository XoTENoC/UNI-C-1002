#include<stdio.h>

int count_evens(int * array, int size){

    int counter, i;

    counter = 0;

    for (i = 0; i < size; i++){
        if (array[i] % 2 == 0){
            counter++;
        }
    }

    return counter;
}

int main(void){
    int values[6]={1,2,4,5,3,6};
    int size=6;

    printf("There are %d even numbers\n", count_evens(values, size));

    return 0;
}