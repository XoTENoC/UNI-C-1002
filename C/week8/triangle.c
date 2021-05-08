#include <stdio.h>
#include <math.h>

int main(void){
    int lengthA = 0;
    int lengthB = 0;

    scanf("%d", &lengthA);
    scanf("%d", &lengthB);



    double C = sqrt(pow(lengthA, 2)+pow(lengthB,2));

    printf("the length of the final size is %0.5f \n", C);

    return 0;
}