// Nathaniel Chang
// odds_evens01.c

//
// asking the users for the amount numbers they want to input
// then asking the user to input all the numbers, the diving up
// the numbers into odd and even then printing the arrays.
//

#include<stdio.h>
#include<stdlib.h>


// main function
int main(void){

    // initailizing variables
    int i, numbers, odd, even;
    int *allNumbers, *evens, *odds;

    // asking the user for the amount of numbers in the array
    printf("how long do you want the array greater then 0: ");
    scanf("%d", &numbers);

    // allocating memory for the arrays
    allNumbers = malloc(sizeof(int)*(numbers+1));
    allNumbers[0] = 0;

    evens = malloc(sizeof(int)*(numbers+1));
    evens[0] = 0;

    odds = malloc(sizeof(int)*(numbers+1));
    odds[0] = 0;

    //  asking the users for the all the numbers
    for (i=0; i<numbers; i++){
        printf("enter a number: ");
        scanf("%d", &allNumbers[i]);
    }

    // sets the counters to 0
    odd = 0;
    even = 0;

    // sorting out the numbers in the numbers array in to odds and evens
    for ( i = 0; i < numbers; i++ ) {
        
        // is the number is even
        if (allNumbers[i] % 2 == 0){

            // assign the number to the the evens array
            evens[even] = allNumbers[i];
            // add one to the even number counter
            even++;

        } 

        // else the number is odd
        else {

            // assigning the number to the odds array
            odds[odd] = allNumbers[i];
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