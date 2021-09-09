#include<stdio.h>
#include<stdlib.h>

int main(void){

    int *grades, *gradesPassing;
    int size, i, counter;

    size = 0;

    printf("How many grades to be entered: ");
    scanf("%d", &size);

    printf("\n");

    grades = malloc(sizeof(int)*size);

    i = 0;

    while (i < size) {
        printf("Enter a grade: ");
        scanf("%d", &grades[i]);

        if (grades[i] <= 100 && grades[i] >= 0){
            i++;
        } else {
            printf("input value ingored\n");
        }
    }

    printf("\n");
    printf("-------------------------------------------\n");

    printf("The grades you entered you entered: ");

    for(i=0;i<size-1;i++){
        printf("%d, ", grades[i]);
    }

    printf("%d\n", grades[size-1]);

    counter = 0;

    for (i = 0; i < size; i++){
        if (grades[i] >= 50){
            counter++;
        }
    }


    gradesPassing = malloc(sizeof(int)*counter);
    int place = 0;
    for (i = 0; i < size; i++){
        if (grades[i] >= 50){
            gradesPassing[place] = grades[i];
            place++;
        }
    }
    printf("\nThe passing grades entered: ");
    for(i=0;i<counter-1;i++){
        printf("%d, ", gradesPassing[i]);
    }
    printf("%d\n", gradesPassing[counter-1]);

    printf("-------------------------------------------\n");

    free(grades);
    free(gradesPassing);

    return 0;
}