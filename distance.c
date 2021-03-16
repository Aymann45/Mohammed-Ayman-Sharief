//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distance_calculator(float x1,float x2, float y1, float y2)
{
  float distance;
  distance=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
}
int main()
{
  float result,a,b,c,d;
  printf("\nEnter the coordinates of point A:\n");
  printf("\nX-Axis Coordinate:\t");
  scanf("%f,&b");
  printf("\nENter the coordinates of point B:\n");
  printf("\nY-Axis coordinate:\t");
  scanf("%f",&c);
  printf("\nY-Axis coordinate:\t");
  scanf("%f",&d);
  result=distance_calculator(a,b,c,d);
  printf("\ndistance between points A nad B=%f\n",result);
  return 0;
}
  
        
    
         

