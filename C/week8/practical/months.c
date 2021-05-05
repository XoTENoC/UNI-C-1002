// months.c
// nathaniel chang (a1821595)

#include <stdio.h>

int main(void){

    //initializing the variable
    int year;

    // asking the user for input
    printf("please enter a number between 1 and 12: ");
    scanf("%d", &year);

    // checking to make sure that number is between 1 and 12 else error
    if ( year >= 0 && year <= 12 ){

        // using a switch statement to pick month inregards to number
        switch (year)
        {
        
        // if 1 month Jan
        case 1:
            printf("Jan\n");
            break;

        // if 2 month Feb
        case 2:
            printf("Feb\n");
            break;
        
        // if 3 month Mar
        case 3:
            printf("Mar\n");
            break;

        // if 4 month Apr
        case 4:
            printf("Apr\n");
            break;

        // if 5 month May
        case 5:
            printf("May\n");
            break;

        // if 6 month Jun
        case 6:
            printf("Jun\n");
            break;

        // if 7 month Jul
        case 7:
            printf("Jul\n");
            break;

        // if 8 month Aug
        case 8:
            printf("Aug\n");
            break;

        // if 9 month Sep
        case 9:
            printf("Sep\n");
            break;

        // if 10 month Oct
        case 10:
            printf("Oct\n");
            break;

        // if 11 month Nov
        case 11:
            printf("Nov\n");
            break;

        // if 12 month Dec
        case 12:
            printf("Dec\n");
            break;
        }

    }

    // error out if number not between 1 and 12
    else{

        printf("please try again with a valid number\n");
        return 0;

    }
    
}