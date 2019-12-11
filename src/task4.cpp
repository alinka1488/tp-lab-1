#include "task4.h"
#include <string.h>
#include <malloc.h>

char * sum(char *x, char *y)
{
	int len;
	int len1 = strlen(x);
	int len2 = strlen(y);

	if (len1 > len2)
	{
		len = len1;
	}
	else
	{
		len = len2;
	}

	char *sum = (char*)malloc((len + 1) * sizeof(char));
	int S = 0;

	for (int i = 1; i <= len + 1; i++)
	{
		if (i <= len1)
		{
			S = S + (*(x + (len1 - i)) - '0');
		}
		if (i <= len2)
		{
			S = S + (*(y + (len2 - i)) - '0');
		}
		*(sum + len + 1 - i) = S % 10 + '0';
		S = S / 10;
	}

	*(sum + len + 1) = 0;

	if (*(sum) == '0')
	{
		for (int i = 0; i <= len; i++)
		{
			*(sum + i) = *(sum + i + 1);
		}
	}
	return sum;
}