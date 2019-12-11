#include "task3.h"
#include <malloc.h>

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned int k = 1;
	unsigned long long S = 0;
	unsigned int i = 0;
	unsigned int* mas = (unsigned int *)malloc(sizeof(unsigned int) * (hbound + 1));

	for (i; i <= hbound; i++)
	{
		mas[i] = i;
	}

	i = 2;

	while (mas[i] * mas[i] <= hbound)
	{
		if (mas[i] != 0)
		{ 
			for (k = i * i; k <= hbound; k = k + i)
			{
				if (mas[k] != 0)
				{
					mas[k] = 0;
				}
			}
		}
		i++;
	}

	for (i = 2; i <= hbound; i++)
	{
		S = S + mas[i];
	}
	return S;
} 