// process_ages.c
// Nathaniel Chang a1821595

//
// from a user input of ages this script finds the max age
// min age and the average age.
//

#include <stdio.h>

int main(void){

    // initalizing variables
    int ages[10] = {0};
    int ageMax = 0, ageMin = 150;
    float ageAverage = 0;
    int counter = 0, i;

    // asking the user for the input
    while (counter < 10){

        // asking the user for input as assigning to the ages array
        printf("please enter an age greater than 0 and less than 150: ");
        scanf("%d", &ages[counter]);

        // making sure the inputed age is correct
        if (ages[counter] > 0 && ages[counter] < 150){

            // if age is valid add one to the counter
            counter++;

        } 
        
        // else ask the user to reinput value before continuing
        else {
            printf("please enter a valid number.\n");
        }
    }

    // sorting the min and max age, and summing all the ages
    for (i = 0; i < 10; i++){

        // if the age is greater than the max age assign it to the max age
        if (ages[i] > ageMax){
            ageMax = ages[i];
        } 
        
        // if the age is less than the min age and assign it to the min age
        else if (ages[i] < ageMin){
            ageMin = ages[i];
        }

        // adding all the ages together
        ageAverage = ageAverage + ages[i];
    }

    // dividing all the summed ages by the ammount in the array
    ageAverage = ageAverage / 10;

    // printing min, max and average age
    printf("\n");
    printf("\n");
    printf("--------------------------------\n");

    printf("Maximum age is ");
    printf("%d\n", ageMax);

    printf("--------------------------------\n");
    printf("Minimum age is ");
    printf("%d\n", ageMin);

    printf("--------------------------------\n");
    printf("Average age is ");
    printf("%0.2f\n", ageAverage);

    printf("--------------------------------\n");
    printf("\n");

}