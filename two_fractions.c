#include<stdio.h>
struct fraction
{
 int num;
 int den;
};
typedef struct fraction fract;
 fract input()
{
 fract f;
printf("enter the numerator:\n");
scanf("%d",&f.num);
printf("enter the denominator:\n");
scanf("%d",&f.den);
return f;
}
fract compute(fract f1,fract f2)
{
int hcf,i,numer ,denom;
numer=(f1.num*f2.den)+(f1.den*f2.num);
denom=f1.den*f2.den;
for(i=1;i<numer && i<=denom;++i)
{
if(numer%i==0&&denom%i==0)
{
hcf=i;
}
}
fract sum;
sum.num=numer/hcf;
sum.den=denom/hcf;
return sum;
}
void output(fract sum)
{
printf("The added fraction is %d/%d",sum.num,sum.den);
}
int main()
{
fract f1,f2,sum;
f1=input();
f2=input();
sum=compute(f1,f2);
output(sum);
return 0;
}
