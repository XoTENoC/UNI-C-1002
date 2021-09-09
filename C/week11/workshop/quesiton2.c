#include<stdio.h>
#include<stdlib.h>

// simple program to copy 1d array of numbers

int* array_copy(int *src, int len){
  // copies from src to allocated  array.

  // allocate
  int* result=malloc(sizeof(int)*len);
  if (result==NULL){
    return NULL;
  }
  
  for(int i=0; i<len; i++){
    result[i]=src[i];
  }
  return result;
}


// driver code for array copy
int main(void){

  // declare 1d array
  int length=6;
  int vals[]={1,2,3,4,5,6};
  int *val_copy;


  // copy
  val_copy=array_copy(vals,length);
  if (val_copy==NULL){
    printf("couldn't copy array\n");
    return 1;
  }

  // test
  for(int i=0;i<length;i++){
    printf("val_copy %d is %d\n",i,val_copy[i]);
  }

  return 0;
    

}