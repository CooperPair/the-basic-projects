//checking for palindrome or not
#include<stdio.h>
int main()
{
int rev,digit,n,m;
printf("Enter any digit number");
scanf("%d",&n);
m = n;
rev = 0;
while(n!=0){
	digit = n%10;
	n = n/10;
	rev = rev*10 + digit;//main logic
	}
printf("Reverse number is %d\n",rev);
if(m==rev)
	printf("Number is palindrome\n");
else
	printf("Number is not palindrome\n");
}
