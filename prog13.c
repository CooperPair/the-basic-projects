#include<stdio.h>
#include<string.h>
typedef struct
{
	int rollno;
	int marks;
	char name[20];
	char grade[20];
} STUDENT;
//we declared a function
int search(char key[20],STUDENT a[20], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(strcmp(key,a[i].name)==0)
		return i;
	}
	return -1;
}

int main()
{
	int n,pos,i;
	STUDENT a[20];
	char key[20];
	printf("Enter the number of student\n");
	scanf("%d",&n);
	printf("Enter the details of student\n");
	for(i=0;i<n;i++)
	{
		printf("name\n");
		scanf("%s",a[i].name);
		printf("rollno\n");
		scanf("%d",&a[i].rollno);
		printf("marks\n");
		scanf("%d",&a[i].marks);
		printf("grades\n");
		scanf("%s",a[i].grade);
		fflush(stdin);
	}
printf("Enter the name to be searched\n");
fflush(stdin);//it also clear the input buffer in certain compiler.
scanf("%s",key);
//calling a function
pos = search(key,a,n);
if(pos== -1)
	printf("Record not found\n");
else
	printf("marks of %s=%d\n",a[pos].name,a[pos].marks);
}
