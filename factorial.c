#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum=1;
    for(int i=1;i<=n;i++)
    {
        sum=sum+log10(i);
    }
    long x=sum;
    printf("%ld",x);
    return 0;
}

