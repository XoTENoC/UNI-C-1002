// form_letter.c
// nathaniel chang (a1821595)

#include <stdio.h>

int main(void){

    // Initialization of variables
    char name[20];
    int age;
    float fraction;

    // Asking the user for input of name
    printf("Please enter your name: ");
    scanf("%s", name);

    // Asking the user for input of age
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Asking the user for their emplotment fraction
    printf("Please enter employment fraction between 0.0 and 1.0: ");
    scanf("%f", &fraction);

    // Output for all data
    printf("Your name is %s, you are %d years old and your employment fraction is %0.2f.\n", name, age, fraction);
    return 0;

}