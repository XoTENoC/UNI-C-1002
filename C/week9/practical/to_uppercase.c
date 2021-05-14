// to_uppercase.c
// Nathaniel Chang a1821595

//
// Takes a inputName from the user and turns all 
// lowercase letters into upper case.
//

#include <stdio.h>

// linking to library for finding length of the string
#include <string.h>

// Main Function
int main(void) {

    // initializing variables
    char inputName[20], uppercaseName[20];
    int i;
    
    // asking user for a inputName
    printf("Please enter your Name (use only lowercase letters): ");
    scanf("%s", inputName);
    
    // looping for the length of length of the string
    for (i=0; i<strlen(inputName); i++) {

        // taking 32 from each of the letter to make upper case
        if (inputName[i] <= 'z' && inputName[i] >= 'a') {
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
