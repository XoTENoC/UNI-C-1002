#include<stdio.h>
#include<stdlib.h> // for malloc
#include<string.h> // for string funs

int main(void){
  // two input arrays
  char input1[257];
  char input2[257];

  // read in the arrays
  printf("Enter a string (max 256 char) ");
  scanf("%[^\n]%*c",input1);

  printf("Enter another string (max 256 char) ");
  scanf("%[^\n]%*c",input2);

  // find out their lengths
  int len1,len2;
  len1=strlen(input1);
  len2=strlen(input2);

  // allocate an array big enough for both
  char *combined;
  combined=malloc(sizeof(char)*(len1+len2+1));
  combined[0]='\0';  // set a null at beginning to
                     // mark as empty.

  //concatenate
  strcat(combined,input1);
  strcat(combined,input2);

  // print
  printf("%s\n",combined);

  free(combined);

  return 0;
}