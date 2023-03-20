#include <stdio.h>
#include <conio.h>
int main()
{
	float r;
	printf("PLEASE ENTER THE RADIUS OF CIRCLE :");
	scanf("%f", &r);
	float a = (3.1428571428571 * r * r);
	printf("\n\nTHE AREA OF THE CIRCLE IS (AREA) :\t\t\t3.1428571428571 x %f^2 = %f\n", r, a);
	float p = (2 * 3.1428571428571 * r);
	printf("\nTHE PERIMETER OF THE CIRCLE IS (PERIMETER) :\t\t2 x 3.1428571428571 x %f = %f", r, p);
	return 0;
}