#include <stdio.h>
#include <stdlib.h>
#include "ctof.h"
#include "ftoc.h"


int main(int argc, char *argv[])
{
	float c, f;
	char t;
	if(argc==3) {
		t = argv[2][0];
		if(t == 'c') {
			c = atof(argv[1]);
		}
		if(t == 'f') {
			f = atof(argv[1]);
		}
	}	
 	else {
		printf("bad input\n");
		return 0;
	}
	if(t == 'c') {
		f = ctof(c);
		printf("Entered Celsius temperature: %f\n", c);
		printf("The Fahrenheit temperature is: %f\n", f);
	}
	if(t == 'f') {
		c = ftoc(f);
		printf("Entered Fahrenheit temperature: %f\n", f);
		printf("The Celsius temperature is: %f\n", c);
	}
	return 0;
}
