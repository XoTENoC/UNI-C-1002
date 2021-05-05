// digits.c
// nathaniel chang (a1821595)

#include <stdio.h>

int main(void){

    // initialize variables
    int number;
    int result;

    // Asking the user for the input
    printf("Please enter a three digit number: ");
    scanf("%d", &number);

    // Finding the ones digit and printing
    result = number % 10;
    printf("%d\n", result);

    // finding the tens digit and printing
    result = (number / 10) % 10;
    printf("%d\n", result);

    // finding the hundreds digit and printing
    result = (number / 100) % 10;
    printf("%d\n", result);
    
    return 0;
}