#include <math.h>
#include <stdio.h>

int main()
 {
   int temp, num, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &temp);

   num = temp;

   for (num= temp; num!= 0; ++n) {
       num/= 10;
   }

   for (num = temp; num!= 0; num/= 10) {
       remainder = num% 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

  
   if ((int)result == temp)
    printf("%d is an Armstrong number.", temp);
   else
    printf("%d is not an Armstrong number.", temp);
   return 0;
}