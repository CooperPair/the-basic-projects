//algorithm to evaluate the polymial for a give value of x and coefficient using horner's method and execute the program with diferernt set of values of x
#include<stdio.h>
int main()
{
int i,n,a[20],sum=0,x;
printf("Enter the power of last digit, say n\n");
scanf("%d",&n);
printf("Enter the n+1 coefficients\n");
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
printf("Enter the value of x\n");
scanf("%d",&x);
for(i=n;i>0;i--)//this shows n-1 coefficiennt
{
	sum = (sum+a[i])*x);
}
sum = sum + a[0];
printf("The sum of the polynomial = %d",sum);
}
