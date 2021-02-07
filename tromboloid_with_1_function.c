//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
    float h,d,b, volume;
    printf("Enter the height, depth and breadth of a tromboloid = ");
    scanf("%f%f%f", &h,&d&b);
    volume = 1/3((h*d*b)+(d/b));
    printf("The volume of the tromboloid is = %f," volume);
}
