// education.c
// nathaniel chang (a1821595)

#include <stdio.h>

int main(void){

    // initalizing varaiables
    int year;

    // asking the user for input
    printf("how many years have you been in school: ");
    scanf("%d", &year);

    // finding out what level of education the user is at
    // if the user is between 0 and 7
    if (year <= 7 && year >= 0){
        printf("You are in primary level education\n");
    } 
    // if the user is between 8 and 12
    else if ( year >= 8 && year <= 12 ) {
        printf("You are in secontary level education\n");
    } 
    // if the user is greater than 13 years
    else if ( year >= 13 ){
        printf("You are in tertiary level education\n");
    }
    // if the number is less than 0
    else {
        printf("try again and input a valid number\n");
        return 0;
    }
    
}