#include<stdio.h>
int main()
{
   int a;
   printf("Enter an integer");
   scanf("%d",&a);
   if((a%5==0)&&(a%11==0))
   printf("The number you entered is divisible by 5 and 11");
   else
   printf("The number you entered is not divisible by 5 and 11");
   return 0;
    
}
