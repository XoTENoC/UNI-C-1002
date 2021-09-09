#include<stdio.h>
#include<stdlib.h>

// makes a 2d array of zeros

// Function to make array with zeros.
int** make_zeros(int rows, int cols){

    int **array = malloc(sizeof(int*)*rows);

    for (int row = 0; row<rows; row++){

        array[row] = malloc (sizeof(int)*cols);

        for(int col = 0; col<cols; col++){

            array[row][col]=0;
        }

    }

    return array;

}

// driver code for array copy
int main(void){

    // declare and build 2d array
    int rows=3;
    int cols=2;

    // creating the 2d array of zeros
    int **zero_arr = make_zeros(rows, cols);

    // printing the array of zeros
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            printf("%d ", zero_arr[i][j]);
        }
        printf("\n");
    }   
    printf("\n");

    for (int i = 0; i < rows; i++){
        free(zero_arr[i]);
    }

    free(zero_arr);
    
    return 0;

}

