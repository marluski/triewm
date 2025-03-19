#include "help.h"
#include <string.h>
#include <stdio.h>

int cli_args(int argc, char **argv)
{
	// Arguments
	if (argc == 1)
	{
		argv[1] = "-"; // Just for it to work fine.
	}

	if (argv[1][0] == '-' && argv[1][1] != '-' && argv[1][1] != '\0') // So if it is a single-letter option and not a double-dash or just a single dash.
	{
		switch (argv[1][1])
		{
			case 'v':
				print_version();
				return 0;
			case 'h':
				print_help();
				return 0;
			default:
				printf("Unknown option: %s\n", argv[1]);
				return 1;
		}
	}
	// Full-lenght args
	if (argv[1][0] == '-' && argv[1][1] == '-')
	{
		if (strcmp(argv[1], "--help") == 0)
		{
			print_help();
			return 0;	
		}
		else if (strcmp(argv[1], "--version") == 0)
		{
			print_version();
			return 0;
		}
		else
		{
			printf("Unknown option: %s\n", argv[1]);
			return 1;
		}
	}
	return 1;
}