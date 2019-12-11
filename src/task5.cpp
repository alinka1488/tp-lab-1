#include "task5.h"
#include <malloc.h>
#include <string.h>

void split(char ***result, int *N, char *buf, char ch)
{
	*N = 1;
	int size = strlen(buf);

	for (int i = 0; i < size; i++)
	{
		if (buf[i] == ch)
		{
			(*N)++;
		}
	}

	*result = (char**)malloc(sizeof(char*) * (*N));
	int i = 0;

	for (int j = 0; j < (*N); j++)
	{
		int len = 0;

		while ((*(buf + 1) != 0) && (*(buf + i) != ch))
		{
			i++;
			len++;
		}

		*(*result + j) = (char*)malloc((len + 1) * sizeof(char));

		strncpy(*(*result + j), buf + (i - len), len);
		*(*(*result + j) + len) = 0;
		i++;
	}
}