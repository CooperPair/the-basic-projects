//This is the program related to binary search problem
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	int n,i,low,mid,high;
	char a[20][20],key[20];
	printf("Enter the number of names\n");
	scanf("%d",&n);
	printf("Enter the names\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	printf("Enter the key\n");
	scanf("%s",key);
	low=0;
	high = n-1;
	while(low<=high)
			{
			mid = (low+high)/2;
			if(strcmp(a[mid],key)==0)
				{
				printf("The name found at the position %d\n",mid+1);
				exit(0);
				}
			else if(strcmp(a[mid],key)>0)
				high = mid-1;
			else
				low = mid+1;
			}
	printf("Unsuccessfull search try another name to get search\n");//if low is greater than high
}
