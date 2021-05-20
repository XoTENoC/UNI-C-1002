// Nathaniel Chang
// temperatures02.c

//
// Takes inputs from the users of temperatures and assigns them to a dynamic
// array, the first 5 inputs are assigned to an array then from the five will
// adjust the array to allow for more numbers.
//

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Main function
int main(void){

    // initializing variables
    int i, counter, originalNumber, whileSwitch;
    float *temperatures, *temp;

    // setting staring values for the variables
    originalNumber = 5;
    counter = 0;
    whileSwitch = 0;

    // assinging the size of the temperature array to the size of 5
    temperatures = malloc(sizeof(float)*(originalNumber));

    // looping for the first 5 times
    for (i=0; i<originalNumber; i++){

        // asking the user for input
        printf("enter a tempurature or enter -100 to end: ");
        scanf("%f", &temperatures[i]);

        // is the numbers is -100 end the loop and skip to printing numbers
        if (temperatures[i] == -100) {

            // stoping the while loop from being able to run
            whileSwitch = 1;

            // leaving the for loop
            break;

        }

        // adding one to the counter
        counter++;

    }

    // the while loop will stay on for as many inputs untill the user stops
    // but inputing -100
    while (whileSwitch == 0) {

        // setting the temp array to the size of the numbers already inputed
        temp = malloc(sizeof(float)*counter);
        
        // coping all the numbers from the temperature array to the temp array
        for (i = 0; i<counter; i++){
            temp[i] = temperatures[i];
        }

        // freeing the memory for temperatures
        free(temperatures);

        // assing the temperatures array to the size of the temp array +1
        temperatures = malloc(sizeof(float)*(counter + 1));

        // coping all the numbers form the temp array to the temperatures array
        for (i = 0; i<counter; i++){
            temperatures[i] = temp[i];
        }

        // freeing the memory assigned to the temp array
        free(temp);

        // asking the user for a new temperature
        printf("enter a tempurature or enter -100 to end: ");
        scanf("%f", &temperatures[counter]);

        // if the numbers entered by the user is -100 end the loop and print numbers
        if (temperatures[counter] == -100) {

            // turning off the loop
            whileSwitch = 1;
            
            // taking one away from the counter
            counter--;

            // leaving the while loop
            break;

        }

        // adding one to the counter
        counter++;

    }

    // printing a new line before displaying numbers
    printf("\n |");

    // printing the numbers in the array backwards
    for (i = counter; i>-1; i=i-1){
        printf("  %0.1f  |", temperatures[i]);
    }

    // printing the new line
    printf("\n");
    printf("\n");

    // freeing the memory for temperature array.
    free(temperatures);

    return 0;

}