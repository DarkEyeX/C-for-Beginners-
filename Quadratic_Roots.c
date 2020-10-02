#include <stdio.h>

void main()
{
    float a,b,c,d,r1,r2,real,imaginary;
    printf("Enter the values of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    d=(((b**2)-4*a*c)**0.5);
    if(d>0)
    {
    r1=((-b)+(d)**0.5)/(2*a);
    r2=((-b)-(d)**0.5)/(2*a);
    printf("Root 1 = %.2f and Root 2 = %.2f",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=(-b)/(2*a);
        printf("Root 1 = Root 2 = %.2f",r1);
    }
    else
    real=(-b)/(2*a);
    imaginary=(d)**0.5)/(2*a);
    printf("real part = %.2f andimmaginary part = %.2f",real,imaginary);
    
    
    
}
