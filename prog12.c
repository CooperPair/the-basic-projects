#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	char name[20];
	int USN;
	fp1 = fopen("student.txt","r");
	if(fp1 == NULL)
	{
	printf("Error opening the student.txt\n");
	exit(0);
	}
	fp2 = fopen("USN.txt","r");
	if(fp2 == NULL)
	{
	printf("Error opening the USN.txt\n");
	exit(0);
	}
	fp3 = fopen("output.txt","w");
	if(fp3 == NULL)
	{
	printf("Error opening the output.txt\n");
	exit(0);
	}
	for(;;)
	{
	if(fscanf(fp1,"%s",name)>0)
		{
		if(fscanf(fp2,"%d",&USN)>0)
			{
			fprintf(fp3,"%s\t%d\n",name,USN);
			}else break;
		}else break;
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fp3 = fopen("output.txt","r");
	if(fp3 == NULL)
	{
	printf("Error in opening the file output.txt\n");
	exit(0);
	}
	printf("student name\tUSN\n");
	while(fscanf(fp3,"%s %d",name,&USN)>0)
	{
	printf("%s\t\t%d\n",name,USN);//this is used to print in the command shell
	}
	fclose(fp3);
}
