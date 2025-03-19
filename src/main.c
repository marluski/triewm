#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <wlroots-0.19/wlr/backend.h>
#include <libinput.h>

#include "color/color.h"
#include "cli/commands.h"
#include "vec.h"



// typedef struct
// {
//   	// Misc
//	char *config_file;
//	// Bar settings
//	int8_t bar_height;
//	bool bar_fills;
//	char *bar_bg_col;
//	char *bar_fg_col;
//	char bar_separator; // The character used to separate the different sections of the bar.
//	int8_t bar_rounding;
//	int8_t bar_margin;
//	int8_t bar_spacing;
//	int8_t bar_padding;
//	int8_t bar_outline_size;
//	// TODO: Add more configurations
//} configuration_t;

struct mcw_server
{
	struct wl_display *wl_display;
	struct wl_event_loop *wl_event_loop;

	struct wl_list outputs;
	struct wl_listener new_output;

	struct wlr_backend *backend;
	struct wlr_session *session;
};

int main(int argc, char **argv)
{
	// arguments
	if (cli_args(argc, argv) != 0) {
		return 1;
	}

	// init wlroots
	struct mcw_server server;

	server.wl_display = wl_display_create();
	assert(server.wl_display);
	server.wl_event_loop = wl_display_get_event_loop(server.wl_display);
	assert(server.wl_event_loop);

	server.backend = wlr_backend_autocreate(server.wl_event_loop, &server.session);
	assert(server.backend);

	wl_list_init(&server.outputs);
	server.new_output.notify = new_output_notify;
	wl_signal_add(&server.backend->events.new_output, &server.new_output);

    if (!wlr_backend_start(server.backend)) {
        fprintf(stderr, "Failed to start backend\n");
        wl_display_destroy(server.wl_display);
        return 1;
    }

    wl_display_run(server.wl_display);
    wl_display_destroy(server.wl_display);

	return 0;
}

