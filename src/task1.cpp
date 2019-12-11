#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long x = 1;
	int flag = 0;

	while (flag != 1)
	{
		x++;
		for (int i = min; i <= max; i++)
		{
			if (x % i != 0)
			{
				break;
			}

			if (i == max)
			{
				flag = 1;
			}
		}
	}
	return x;
} 
