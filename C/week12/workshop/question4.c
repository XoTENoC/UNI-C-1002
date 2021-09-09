#include<stdio.h>
#include<stdlib.h>

// simple program to copy 2d array of numbers

int** array_copy2d(int **src, int rows, int cols, int *lengths){
    // allocate
    int** result=malloc(sizeof(int*)*rows);
    if (result==NULL){
        return NULL;
    }

    // copies from src to dest array.
    for(int row=0; row<rows; row++){
      // allocate a row
      result[row]=malloc(sizeof(int)*(lengths[row])); // Allocating only the length of the row required.
      if (result[row]==NULL){
          return NULL;
      }
      // copy a row. 
      for(int col=0; col<(lengths[row]); col++){ // Only iterating until the end of the row.
          result[row][col]=src[row][col];
      }
    }
    
    return result;
  
}


// driver code for array copy
int main(void){

    // declare and build 2d array
    int rows=3;
    int cols=4;
    int row0[]={1,2,3};
    int row1[]={4,5};
    int row2[]={6,7,8,9};


    int *vals[3];

    // Array to store the lenghts of each row.
    int lengths[] = {3,2,4};

    // build vals
    vals[0]=row0;
    vals[1]=row1;
    vals[2]=row2;

    // destination array
    int **val_copy;


    // copy
    val_copy=array_copy2d(vals,rows,cols, lengths);
    // check if malloc worked
    if(val_copy==NULL){
        printf("allocation error\n");
        return 1;
    }

    // test
    for(int row=0; row<rows; row++){
        for(int col=0; col<lengths[row]; col++){ // Iterating only to the final value of each row.
            printf("%d ",val_copy[row][col]);
        }
        printf("\n");
    }

    return 0;

}

