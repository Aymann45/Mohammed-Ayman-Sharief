//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float input(char c)
{
  float n;
  printf("Enter the point %c:",h);
  scanf("%f",&n);
  return n;
}

float distance (float x1,float y1,float x2,float y2)
{
  float dis;
  dis=sqrt((x2-x1)(x2-x1)+(y2-y1)(y2-y1));
  return dis;
}

void output (float dis)
{
  printf("Distance between (x1,y1) and (x2,y2) is: %0.2f",dis);
}

int main()
{
  float dis,a,b,c,d;
  a=input('x');
  b=input('y');
  c=input('x');
  d=input('y');
  dis=distance(a,b,c,d);
  output(dis);
}
  
