// Nathaniel chang
// temperatures01.c

//
// Asks th users for how many inputs in the array of numbers
// then asks the users to input the tempuratures
// then prints the numbers in the array back wards
//


// libraries needed
#include<stdio.h>
#include<stdlib.h>

// main function
int main(void){

    // initializing variables
    int numbers, i;
    float *temperatures;

    // asking the user for the ammount of numbers in the array
    printf("how long do you want the array greater then 0: ");
    scanf("%d", &numbers);

    // allocating memory for the array
    temperatures = malloc(sizeof(float)*(numbers+1));
    temperatures[0] = 0;

    // reading in the tempuratures into the array
    for (i=0; i<numbers; i++){
        printf("enter a tempurature: ");
        scanf("%f", &temperatures[i]);
    }

    // printing the numbers in the array backwards
    for (i = numbers-1; i>-1; i=i-1){
        printf("%0.1f  ", temperatures[i]);
    }

    // printing the new line
    printf("\n");

    return 0;
}