// reverse_in_place.c
// Nathaniel Chang a1821595

//
// takes a string input from the user and reverses it
//

#include <stdio.h>

// linking to library for finding length of the string
#include <string.h>

int main(void) {
    
    // initializing variables
    char inputWord[20], wordBackwards[20];
    int i;

    // asking user for the input
    printf("Please enter the word you want to reverse : ");
    scanf("%s", inputWord);
    
    // looping for the length of the word
    for (i=0; i<strlen(inputWord); i++) {

        // storing the word letter by letter in reverse.
        wordBackwards[i] = inputWord[strlen(inputWord)-(i+1)];

    }

    // adding the null character to the end of the string
    wordBackwards[strlen(inputWord)] = '\0';
    
    printf("\n \n");
    printf("your word in reverse is: ");
    
    // printing the wordBackwards
    printf("%s\n \n", wordBackwards);
    
    return 0;
}
