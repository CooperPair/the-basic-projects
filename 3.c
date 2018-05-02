//To find the square root of the number without importing the math function
#include<stdio.h>
int main()
{
float n,i;
printf("Enter the number\n");
scanf("%f",&n);
for(i=0.000001;(i*i)<=n;i+=0.000001);{
	i = i-0.000001;
}
printf("The root of the number %f is %f\n",n,i);
}

