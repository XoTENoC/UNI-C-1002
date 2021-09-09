// nathaniel chang

// creating a function that print all the numbers in an array

#include<stdio.h>
#include<stdlib.h>

// function for printing the array within brackets
void printArraySum(int *src, int number) {

    // init variables
    int i;

    // printing a bracket
    printf("{ ");

    // print all numbers in an array
    for (i = 0; i < number-1; i++){
        printf("%d, ", src[i]);
    }

    // printing closing bracket
    printf("%d }\n", src[number-1]);
}

// main function
int main(void){
    // init variables
    int numbers, i;
    int *array;

    // asking the user for the input
    printf("how many numbers: ");
    scanf("%d", &numbers);

    // allocating array to the size of how many numbers
    array = malloc(sizeof(int)*numbers);

    // looping for the amount of numbers
    for (i = 0; i < numbers; i++){

        // asking the user for a number
        printf("enter number: ");
        scanf("%d", &array[i]);
    }

    // using the fuction above to print the array
    printArraySum(array, numbers);
}

