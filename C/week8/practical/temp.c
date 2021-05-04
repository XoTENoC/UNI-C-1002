// temp.c
// nathaniel chang (a1821595)

#include <stdio.h>

int main(void){

    // initializing variables
    int tempC;
    float tempF;

    // asking the user for input
    printf("please input a tempurature in celcius: ");
    scanf("%d", &tempC);

    // making sure that the input is valid if so continue else error out
    if (tempC >= -50) {

        // converting celius to fahrenheit
        tempF = ((tempC * 9) / 5) + 32;

        // printing fahrenheit
        printf("%d degrees Celsius is %0.2f degrees Fahrenheit\n", tempC, tempF);

    } else {

        // printing error to tell user to restart
        printf("please try again number not valid\n");
        return 0;

    }

    return 0;
}