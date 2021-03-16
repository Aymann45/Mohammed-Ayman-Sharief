//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
struct point{int x,y;};
double getDistance(struct point a,struct point b)
{
  double distance;
  distance=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
  return distance;
}
int main()
{
  struct point a,b;
  printf("Enter coordiante of point A:");
  scanf("%d%d",&b.x,&b.y);
  printf("Distance between A and B:%lf\n",getDistance(a,b));
  return 0;
}
                  
              
