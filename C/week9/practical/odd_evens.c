// odd_evens.c
// Nathaniel Chang a1821595

//
// Displaying and array of numbers if arrays of odds and evens
//

#include <stdio.h>

// ain function
int main(void){

    // initializing all the varaiables and the arrays
    int numbers[12] = {11, 3, 9, 7, 6, 10, 13, 17, 2, 8, 3, 15};
    int odds[12] = {0};
    int evens[12] = {0};
    int i, odd, even;
    odd = 0;
    even = 0;

    // sorting out the numbers in the numbers array in to odds and evens
    for ( i = 0; i < 12; i++ ) {
        
        // is the number is even
        if (numbers[i] % 2 == 0){

            // assign the number to the the evens array
            evens[even] = numbers[i];
            // add one to the even number counter
            even++;

        } 

        // else the number is odd
        else {

            // assigning the number to the odds array
            odds[odd] = numbers[i];
            // adding one to the odd counter
            odd++;
        }

    }

    printf("\n");
    printf("All the even numbers \n");

    // print all the evens numbers
    for (i = 0; i < even; i++){
        printf("%d ", evens[i]);
    }

    printf("\n");
    printf("\n");
    printf("All the odd numbers \n");

    // printing all the odd numbers
    for (i = 0; i < odd; i++){
        printf("%d ", odds[i]);
    }

    printf("\n");
    printf("\n");
    
    
}