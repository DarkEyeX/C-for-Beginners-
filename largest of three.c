#include <stdio.h>
int main() {
    double s1, s2, s3;
    printf("Enter the value of three different numbers: ");
    scanf("%lf %lf %lf", &s1, &s2, &s3);

    if (s1 >= s2 && s1 >= s3)
        printf("%.2f is the largest number.", s1);

    
    if (s2 >= s1 && s2 >= s3)
        printf("%.2f is the largest number.", s2);

    
    if (s3 >= s1 && s3 >= s2)
        printf("%.2f is the largest number.", s3);

    return 0;
}