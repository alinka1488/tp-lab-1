#include "task5.h"
#include <iostream>

int main() 
{
	char buf[] = "You are having very good time";
	int N = 1;
	char **result = NULL;

	split(&result, &N, buf, ' ');
	for (int i = 0; i < N; i++)
	{
		printf("%s\n", result[i]);
	}
	return 1;
}