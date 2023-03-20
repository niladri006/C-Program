#include <stdio.h>
#include <conio.h>
main()
{
	float c;
	printf("ENTER YOUR CELSIUS NUMBER (C) :");
	scanf("%f", &c);
	float f = (9 * c) / 5 + 32;
	printf("IN FAHRENHEIT YOUR ANS IS (F) :%f", f);
	return 0;
}
