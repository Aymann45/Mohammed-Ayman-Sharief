#include<stdio.h>
#include <stdlib.h>

typedef struct 
{
	int n,d;
}fraction;

fraction get_nvalue();
fraction get_fractions();
fraction compute_sum(fraction f1,fraction f2);
fraction simplify(fraction sum);
int get_gcd(int num, int den);
void display_sum(fraction sum);

fraction get_nvalue()
{
    	int n,i;
    	fraction SUM,get_sum;
    
    	printf("Enter the no. of fractions: ");
    	scanf("%d",&n);
    
    	fraction f[n];
    	for(i=0;i<n;i++)
    	{
       		printf("\nEnter farction %d\n",i+1);
        		f[i] = get_fractions();
    	}
    
   	if(n==1)
    	{
        		get_sum = f[0];
   	}
    	else
    	{
        		SUM = f[0];
        		for(i=0;i<n-1;i++)
        		{
            		get_sum = compute_sum(SUM,f[i+1]);
            		SUM = get_sum;
        		}
    	}
    	return get_sum;
}

fraction get_fractions()
{
    	fraction f;
    	printf("Numerator  :   ");
    	scanf("%d",&f.n);
    	printf("              ━━━\n");
    	printf("Denominator :  ");
    	scanf("%d",&f.d);
 	printf("\n");
    	return f;
}

fraction compute_sum(fraction f1,fraction f2)
{
	fraction sum; 	
	sum.n=(f1.n*f2.d)+(f2.n*f1.d);
	sum.d=f1.d*f2.d;
    	sum=simplify(sum);
	return sum;
}

fraction simplify(fraction sum)
{
	int gcd=get_gcd(sum.n,sum.d);
	sum.n=sum.n/gcd;
	sum.d=sum.d/gcd;
	return sum;
}

int get_gcd(int num, int den)
{
    	int gcd;
    	for(int i=2; i<=num && i<=den; i++)
	{
	 	if(num%i==0 && den%i==0)
		{
			gcd=i;
		}
	}
	return gcd;
}

void display_sum(fraction sum)
{
    	if(sum.d==1)
    	   printf("The sum of the given fractions : %d\n",sum.n);
    	else
   printf("The sum of the given fractions : %d / %d\n",sum.n,sum.d);
}

int main()
{
	fraction result;
    	result = get_nvalue();
    	display_sum(result);
	return 0;
}
