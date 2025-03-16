PKG_CONFIG ?= pkg-config

# Variables for Wayland tools and protocol paths
WAYLAND_PROTOCOLS := $(shell $(PKG_CONFIG) --variable=pkgdatadir wayland-protocols)
WAYLAND_SCANNER := $(shell $(PKG_CONFIG) --variable=wayland_scanner wayland-scanner)

# Packages required
PKGS = wlroots-0.19 wayland-server xkbcommon

# Compiler and linker flags from pkg-config
CFLAGS_PKG_CONFIG := $(shell $(PKG_CONFIG) --cflags $(PKGS))
LIBS := $(shell $(PKG_CONFIG) --libs $(PKGS))

# Add wlroots include path manually
CFLAGS += $(CFLAGS_PKG_CONFIG) -I/usr/local/include/wlroots-0.19/wlr -DWLR_USE_UNSTABLE

all: tinywl

# Generate xdg-shell protocol header
xdg-shell-protocol.h:
	$(WAYLAND_SCANNER) server-header \
		$(WAYLAND_PROTOCOLS)/stable/xdg-shell/xdg-shell.xml $@

# Compile the tinywl source
tinywl.o: tinywl.c xdg-shell-protocol.h
	$(CC) -c $< -g -Werror $(CFLAGS) -I. -o $@

# Link the final binary
tinywl: tinywl.o
	$(CC) $^ -g -Werror $(CFLAGS) $(LDFLAGS) $(LIBS) -o $@

clean:
	rm -f tinywl tinywl.o xdg-shell-protocol.h

.PHONY: all clean

