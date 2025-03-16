#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#include "color.h"
#include "vec.h"

#define VERSION_MANIFEST "1.0.0"

typedef struct
{
	// Misc
	char *config_file;
	// Bar settings
	int8_t bar_height;
	bool bar_fills;
	char *bar_bg_col;
	char *bar_fg_col;
	char bar_separator; // The character used to separate the different sections of the bar.
	int8_t bar_rounding;
	int8_t bar_margin;
	int8_t bar_spacing;
	int8_t bar_padding;
	int8_t bar_outline_size;
	
	
	// TODO: Add more configurations
} Configuration_t;

int main(int argc, char **argv)
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
				printf("TrieWM version: %s\n", VERSION_MANIFEST);
				return 0;
			case 'h':
				printf("TrieWM help:\n");
				printf("  -v, --version\t\tPrints the version of the program.\n");
				printf("  -h, --help\t\tPrints this help.\n");
				return 0;
			default:
				printf("Unknown option: %s\n", argv[1]);
				return 1;
		}
	}
}
