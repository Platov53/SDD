#include <stdio.h>
#include <unistd.h>
#include "utils.h"

int main (int argc, char *argv[])
{
	int op;

	while((op = getopt(argc, argv, "h")) != -1)
	{
		switch (op)
		{
			case 'h':
				help();
				break;
			default:
				printf("[ERROR] Flag digitada inexistente\n");
				return 1;
		}
	}

	return 0;
}
