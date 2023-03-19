#include <stdio.h>
#include "ctof.h"


float ctof(float c)
{
	float f;
	f = (32 - 0) + (c * 180/100);
	return f;
}

