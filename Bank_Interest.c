#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float p,r,t,a;
	printf("Enter Principle Amount: ");
	scanf("%f",&p);
	
	printf("Enter Rate: ");
	scanf("%f",&r);
	
	printf("Enter Time Span: ");
	scanf("%f",&t);
	
	a= p*(1+(r/100));
	printf("Compound Interest Annually: %d",a);
}

