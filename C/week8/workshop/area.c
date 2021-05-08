#include <stdio.h>


int main(void){
    int radius;
    double PI = 3.1415926;
    double area;

    printf("plese enter a radius: ");
    scanf("%d", &radius);

    area = PI * (radius*radius);

    printf("the area of the circle %0.4f\n", area);

    return 0;
}