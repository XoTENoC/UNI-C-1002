// nathaniel chang

// print a number of zeros in an array

#include<stdio.h>
#include<stdlib.h>

// array for making zeros
int* make_zeros(int rows) {
    // init variables
    int i;

    // allocating the size of the array
    int* result = malloc(sizeof(int)*rows);

    // looping for the length of the array and turning to 0
    for( i = 0; i < rows; i++){
        result[i] = 0;
    }

    // returning the result to array
    return result;
}

// function for printing the array within brackets
void printArraySum(int *src, int number) {

    // init variables
    int i;

    // printing a bracket
    printf("{ ");

    // print all numbers in an array
    for (i = 0; i < number; i++){
        printf("%d ", src[i]);
    }

    // printing closing bracket
    printf("}\n");
}

// main function
int main(void){
    // init variables
    int numbers, i;
    int *array;

    // asking the user for the input
    printf("how many numbers: ");
    scanf("%d", &numbers);

    // setting array to all zeros with function
    array = make_zeros(numbers);

    // using the function from last question to print array
    printArraySum(array, numbers);
}