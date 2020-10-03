#include <stdio.h>
int main()
{
    int s1, s2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &s1, &s2);

    for(i=1; i <= s1 && i <= s2; ++i)
    {
        // Checks if i is factor of both integers
        if(s1%i==0 && s2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", s1, s2, gcd);

    return 0;
}