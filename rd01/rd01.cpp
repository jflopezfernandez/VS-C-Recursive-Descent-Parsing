
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	const char* input = "28.24";

	if (strcmp(input, "28.24") == 0)
	{
		printf("Strings are equal\n");
	}
	else
	{
		printf("Not equal\n");
	}

	return EXIT_SUCCESS;
}
