#include <stdio.h>
#include <stdlib.h>
#include "ftoc.h"

int main(int argc, char *argv[])
{
	float f, c;
	if(argc == 2) {
		f = atof(argv[1]);
	}
	else {
		printf("only one number at a time\n");
		return 0;
	}
	c = ftoc(f);
	printf("Enter Fahrenheit temperature:  %f\n", f);
	printf("The Celsius temperature is: %f\n", c);
	return 0;
}
