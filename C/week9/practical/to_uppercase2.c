// to_uppercase2.c
// Nathaniel Chang a1821595

//
// Looks at an input string from the user and if the letter is lowercase
// the code will make it upper case and leave all the uppercases with out
// changing them.
//

#include <stdio.h>

// linking to library for finding length of the string
#include <string.h>

// Main function
int main(void) {

    // initializing variables
    char inputName[20], uppercaseName[20];
    int i; 
    
    // asking user for input
    printf("Please enter your Name: ");
    scanf("%s", inputName);
    
    // looping for the length of length of the string
    for (i=0; i<strlen(inputName); i++) {

        // checks to see it the letter is already uppercase
        if (inputName[i] < 97) { 

            // assigns the input to the new string
            uppercaseName[i] = inputName[i];

        } 
        // the input value is lower case
        else {

            // makes the strin upper case
            uppercaseName[i] = inputName[i] - 32;

        }
    }

    // adding the null character to the end
    uppercaseName[strlen(inputName)] = '\0';
    
    printf("\n");
    printf("---------------------\n");

    printf("original name: %s\n", inputName);

    printf("\n");
    printf("---------------------\n");

    // printing the update string
    printf("Capitalized name: %s\n", uppercaseName);
    printf("\n");
    
    return 0;
}
