#include <stdio.h>
#include <math.h>

int main(void){
    int A = 5;
    int B = 6;

    double C = sqrt(pow(A, 2)+pow(B,2));

    printf("the length of the final size is %0.5f \n", C);

    return 0;
}