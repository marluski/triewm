.PHONY: build uninstall

build: ./src/main.c
	@printf "\033[1mWelcome to OpenWM!\033[0m\n"
	@printf "\033[36mWhich compiler do you want to use?\n"
	@printf "  [g] gcc\n  [c] clang\n  [C] cc (default)\n> \033[0m"
	@read compiler; \
	case $$compiler in \
		g)  echo "Using gcc..."; compiler_cmd="gcc";; \
		c)  echo "Using clang..."; compiler_cmd="clang";; \
		C)  echo "Using cc..."; compiler_cmd="cc";; \
		*)  echo "No valid input. Defaulting to cc..."; compiler_cmd="cc";; \
	esac; \
	echo "Compiling with $$compiler_cmd..."; \
	$$compiler_cmd ./src/main.c -o openwm -Werror -w --std=c11 && \
	sudo cp openwm /usr/local/bin/ && \
	printf "\033[32m✔ Successfully installed: /usr/local/bin/openwm\033[0m\n" || \
	printf "\033[31m✖ Build failed. Check your code or compiler settings.\033[0m\n"

uninstall:
	@printf "\033[1mWelcome to OpenWM!\033[0m\n"
	@printf "\033[31mAre you sure you want to uninstall OpenWM? ([Y]es or [N]o) \033[0m"
	@read uninstalls; \
	case $$uninstalls in \
		y|Y) \
			if [ -f /usr/local/bin/openwm ]; then \
				echo "Uninstalling OpenWM..."; \
				sudo rm -f /usr/local/bin/openwm && \
				printf "\033[32m✔ OpenWM uninstalled.\033[0m\n"; \
			else \
				printf "\033[31m✖ OpenWM is not installed.\033[0m\n"; \
			fi ;; \
		*) echo "Cancelling..."; exit ;; \
	esac;

this_folder: ./src/main.c
	@printf "- \033[1mINFO:\033[0m Making OpenWM on this folder with `clang`"
	clang ./src/main.c/ -o openwm -Werror -w --std=c11
