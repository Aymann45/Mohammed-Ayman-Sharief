//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main() 
{
   float a, b, sum;
   printf("Enter two numbers a and b = ");
   scanf("%f %f", &a, &b);
   sum = a + b;
   printf("Sum of %f + %f = %f", a,b,sum);
   return(0);
}
