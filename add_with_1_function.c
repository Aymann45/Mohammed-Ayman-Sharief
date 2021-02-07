//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main() 
{
   int a, b, sum;
   printf("Enter two no.= ");
   scanf("%d %d", &a, &b);
   sum = a + b;
   printf("Sum = %d", sum);
   return(0);
}
