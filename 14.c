//using pointer to compute thee sum,mean,stddev
#include<stdio.h>
#include<math.h>
int main()
{
	float a[10],*ptr,mean,sum=0,var,sumstd=0,std;
	int n,i;
	printf("Enter the number of elments\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	ptr=a;
	for(i=0;i<n;i++)
	{
		sum = sum + (*ptr);
		ptr++;
	}
	mean=sum/n;
	ptr=a;
	for(i=0;i<n;i++)
	{
		sumstd = sumstd + pow((*ptr-mean),2);
		ptr++;
	}
	var = sumstd/n;
	std=sqrt(var);
	printf("Sum=%f\n",sum);
	printf("Mean=%f\n",mean);
	printf("Variance=%f\n",var);
	printf("Standard Deviation=%f\n",std);
}
