#include<stdio.h>

int main(void){

    int i;
    double largestNumber;
    double number[10];

    for(i = 0; i < 10; i++){
        printf("Enter a number: ");
        scanf("%lf", &number[i]);
    }

    largestNumber = number[0];

    for(i = 1; i < 10; i++){
        if (number[i] > largestNumber){
            largestNumber = number[i];
        }
    }
    printf("largest number is %lf.", largestNumber);
    printf("\n");
}