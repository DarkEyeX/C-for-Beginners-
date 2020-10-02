#include<stdio.h>
void main()
{
 int q,d,c,tc;
 printf("Enter the quantity purchased");
 scanf("%d",&q);
 if(q>1000)
 {
 d=(q*100)*0.1 ;
 tc=((q*100)-d);
 printf("The total cost is %d",tc);
 }
 else
 {
 tc=q*100;
 printf("The total cost is %d",tc);
 }
  }
  
  
    

