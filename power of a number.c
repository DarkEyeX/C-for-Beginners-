#include <stdio.h>
int main() {
    int base, expo;
    long long answer = 1;
    printf("Enter a base value: ");
    scanf("%d", &base);
    printf("Enter the value of the exponent: ");
    scanf("%d", &expo);

    while (exp != 0) {
        answer *= base;
        --exp;
    }
    printf("answer = %lld",answer );
    return 0;
}