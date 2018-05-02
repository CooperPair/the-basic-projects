//program to find the quadratic  root
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,x1,x2;
	printf("Enter nonzero coefficient\n");
	scanf("%f%f%f",&a,&b,&c);
	d = (b*b)-4*a*c;
	if(d==0){
		x1=-b/(2*a);
		printf("The roots are real and equal\n");
		printf("The roots are x1=x2=%f",x1);
		}
	else if(d>0){
			x1 = (-b+sqrt(d))/(2*a);
			x2 = (-b-sqrt(d))/(2*a);
			printf("The roots are real and distinct\n");
			printf("The roots are root1:%f and root2:%f",x1,x2);
			}
	else{
		printf("The roots are imaginary");
		x1 = sqrt(fabs(d))/(2*a);
		x2 = (-b)/(2*a);
		printf("The imaginary root1 is %f+i%f\n",x2,x1);
		printf("The imaginary root2 is %f-i%f\n",x2,x1);
		}

	return 0;
}
