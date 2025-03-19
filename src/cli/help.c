#include <stdio.h>
#include "help.h"

#define VERSION_MANIFEST "1.0.0"

void print_help() {
	printf("Usage: triewm [OPTIONS]\n");
	printf("Options:\n");
	printf("  -h, --help\t\tShow this help message\n");
	printf("  -v, --version\t\tShow version information\n");
	printf("  -c, --config\t\tShow configuration file path\n");
	printf("  -l <file>, --load-config <file>\t\t Load configuration file from another location\n");
	printf("  -d, --default-config\t\t Load default configuration and save it to the config file\n");
}

void print_version() {
	printf("triewm version %s\n", VERSION_MANIFEST);
}
