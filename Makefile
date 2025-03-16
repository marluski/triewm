# Makefile for TrieWM

.PHONY: build clean

# Compiler (default)
CC = clang
CFLAGS = -Wall -Wextra -Werror -std=c11 -I/usr/local/include
LDFLAGS = -L/usr/local/lib

EXEC = triewm
SRC = src/main.c
OBJ = $(SRC:.c=.o)

build:
	@echo "Welcome to the TrieWM build system!"
	@echo -e "\033[36m?\033[0m What compiler do you want to use? \n"
	@echo "    1 - clang (default)"
	@echo "    2 - gcc"
	@echo "    3 - cc"
	@read -p "Selection: " compiler; \
	case $$compiler in \
		2) comp=gcc ;; \
		3) comp=cc ;; \
		*) comp=clang ;; \
	esac; \
	echo "Using $$comp"; \
	read -p "Use $$comp to compile? (y/n): " confirm; \
	if [ "$$confirm" != "y" ]; then \
		echo "Build cancelled."; \
		exit 1; \
	fi; \
	echo "Building..."; \
	$$comp $(CFLAGS) $(SRC) -o $(EXEC) $(LDFLAGS); \
	if [ $$? -eq 0 ]; then \
		printf "\033[32mBuild successful!\033[0m\n"; \
	else \
		printf "\033[31mBuild failed!\033[0m\n"; \
		exit 1; \
	fi; \
	read -p "Move executable to /usr/local/bin? (y/n): " moveit; \
	if [ "$$moveit" = "y" ]; then \
		sudo mv $(EXEC) /usr/local/bin && \
		printf "\033[32mMove successful!\033[0m\n" || \
		{ printf "\033[31mMove failed!\033[0m\n"; exit 1; }; \
	else \
		echo "Executable is in the current directory."; \
	fi

clean:
	@printf "\033[36m?\033[0m Do you want to \033[1muninstall\033[0m TrieWM?\n"
	@read -p "Yes or no? (y/n): " confirm; \
	if [ "$$confirm" = "y" ]; then \
		echo "Cleaning..."; \
		rm -f $(EXEC); \
		if [ $$? -eq 0 ]; then \
			printf "\033[32mClean successful!\033[0m\n"; \
		else \
			printf "\033[31mClean failed!\033[0m\n"; \
			exit 1; \
		fi; \
	else \
		echo "Cancelled."; \
	fi
