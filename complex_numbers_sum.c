//WAP to find the sum of n complex numbers using structures and 4 or more functions.
#include <stdio.h>
int main()
{
  int n,sum=0,c,value;
  printf("Enter the number of integers you want to add\n");
  scanf("%d",&n);
  printf("Enter %d integers\n",n);
  for (c=1;c<=n;c++){scanf("%d",&value);
                     sum=sum+value;
                    }
  printf("Sum of the integers=%d\n",sujm);
  return 0;
}
 
