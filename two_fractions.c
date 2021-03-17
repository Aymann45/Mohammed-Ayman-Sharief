//WAP to find the sum of two fractions.
#include<stdio.h>
#include<conio.h>
typeof struct
{
  int num;
  int deno;
}
fract;
fract sum(fract.fract);
int main()
{
  int num1,deno1,num2,deno2;
  printf("Enter 1st fraction=numerator and denominator");
  scanf("%d%d",&num1,&deno1);
  printf("Enter 2nd fraction= numerator and denominator");
  scanf("%d,%d",&num2,deno2);
  fract f1={num1,deno1};
  fract f2={num2,deno2};
  fract result=sum(f1,f2);
  printf("Result=%d%d",result,num,result,deno);
  getch();
  return 0;
}
         
