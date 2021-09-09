#include<stdio.h>

int main(void){
    int array[4], sum, i;

    sum = 0;

    for (i = 0; i < 5; i++){
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }

    for ( i = 0; i < 5; i++){
        sum = sum + array[i];
    }

    printf("\n");

    printf("The sum of your numbers is: %d\n", sum);

    printf("\n");

    return 0;
    
}