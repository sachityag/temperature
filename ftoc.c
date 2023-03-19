#include "ftoc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float ftoc( float f)
{
	
	float c;
	c =  (f - 32) * 100/180;
	return c;
}


