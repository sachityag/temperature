#include <stdio.h>
#include <stdlib.h>
#include "ctof.h"


int main(int argc, char *argv[])
{
	float c, f;
	f = ctof(c);
	printf("Enter Celsius temperature: %f\n", c);
	printf("The Fahrenheit temperature is: %f\n", f);
	return 0;
}
