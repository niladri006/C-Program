#include<stdio.h>

 int main()
{
	float a;
    int b;

	printf("Enter Your Exam Result's Number:");
	scanf("%f",&a);

	printf ("Enter Your Total Exam Number :");
	scanf ("%d",&b);

	float c = a*100/b;
	printf("YOUR EXAM PERSENTAGE IS : (%f X 100)/%d = %f \n",a,b,c); 

	return 0;
}
