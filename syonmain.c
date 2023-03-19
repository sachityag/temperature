#include <stdio.h>
#include <stdlib.h>
#include "ftoc.h"

int main(int argc, char *argv[])
{
	float f, c;
	c = ftoc(f);
	printf("What american temperature is it? %f\n", f);
	printf("The actual temperature is %f\n", c);
	return 0;
}
