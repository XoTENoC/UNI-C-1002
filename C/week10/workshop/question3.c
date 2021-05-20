#include<stdio.h>
#include<string.h>

int main(void) {
    char digits[100];

    printf("input digits: ");
    scanf("%s", digits);

    int sum = 0;

    int length = strlen(digits);

    for (int i = 0; i < length; i++){
        sum = sum + (digits[i]-48);
    }
    
    printf("%d\n", sum);
}