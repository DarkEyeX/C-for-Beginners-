#include <stdio.h>

void main()
{
    int per;
    printf("Enter your percentage");
    scanf("%d",&per);
    if(per>=90)
    printf("Your grade is A");
    else if(per>=80)
    printf("Your grade is B");
    else if(per>=70)
    printf("Your grade is C");
    else if(per>=60)
    printf("Your grade is D");
    else if(per>=40)
    printf("Your grade is E");
    else if(per<40)
    printf("Your grade is F");
    else
    printf("The entered percentage is invalid");
    
    
   

}
