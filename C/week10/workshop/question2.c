#include<stdio.h>
#include<stdlib.h> // for malloc
#include<string.h> // for string funs
#include<stdbool.h>

int main(void){
  // two input arrays
  char input1[257];
  char input2[257];

  // read in the arrays
  printf("Enter a string (max 256 char) ");
  scanf("%[^\n]%*c",input1);

  int len1,len2,comLen;
  len1=strlen(input1);

  char *combined;
  combined=malloc(sizeof(char)*(len1+1));
  combined[0]='\0';

  strcat(combined,input1);

  while (true) {
    printf("Enter another string (max 256 char) ");
    scanf("%[^\n]%*c",input2);

    if (input2[0] == 35){
      break;
    }
    else{
      len2=strlen(input2);
      comLen=strlen(combined);

      char *temp;
      temp = malloc(sizeof(char)*(comLen+len2+1));
      temp[0] = '\0';

      strcat(temp, combined);
      strcat(temp, input2);

      free(combined);

      len1 = strlen(temp);

      combined=malloc(sizeof(char)*(len1+1));
      combined[0]='\0';

      strcpy(combined, temp);

      free(temp);

    }
  }

  // print
  printf("%s\n",combined);

  free(combined);

  return 0;
}