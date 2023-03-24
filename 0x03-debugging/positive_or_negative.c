#include "main.h"
#include <stdio.h>
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
