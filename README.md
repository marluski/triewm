<div align="center">
    <h1>TrieWM</h1>
    <p>A lightweight window manager for X11 and Wayland</p>
</div>

<ul align="center">
    <a href="https://git.sr.ht/~mariluski/openwm">Repository</a>
    <a href="https://todo.sr.ht/~mariluski/OpenWM_Issues">Issue Tracker</a>
    <a href="https://web.libera.chat/#OpenWM">Libera Chat (IRC Channel)</a>
    <a href="https://lists.sr.ht/~mariluski/openwm-devel">Contributing</a>
    <a href="https://lists.sr.ht/~mariluski/openwm-announce">Announcements</a>
    <a href="https://man.sr.ht/~mariluski/OpenWM_Wiki">Documentation</a>
</ul>

## About

Trie is a lightweight window manager for X11 and Wayland compatible with Linux and BSD.
It is very customizable, supports plugins and is **[Free Software](#license)**.

## Features

- Customizable
- Modular
- Extensible
- Fast
- Small
- Easy to use
- Themes
- And more...

## Installation

Trie can only be installed from source or via the pre-compiled binaries.

> Note: The building process is very simple and user-friendly.

### Dependencies

- [Wlroots](https://github.com/swaywm/wlroots)
- [Wayland](https://wayland.freedesktop.org/)
- [Wayland protocols](https://gitlab.freedesktop.org/wayland/wayland-protocols)
- [`make`](https://www.gnu.org/software/make/)
- [`egl`](https://www.khronos.org/egl/)
- [GLESv2](https://registry.khronos.org/OpenGL-Refpages/es2.0/)
- [Vulkan Loader](https://github.com/KhronosGroup/Vulkan-Loader)
- [LibDRM](https://github.com/tobiasjakobi/libdrm)
- GBM
- [Libinput](https://www.freedesktop.org/wiki/Software/libinput/)
- [XKBCommon](https://xkbcommon.org/)
- udev
- [Pixman](https://pixman.org/)
- [libseat](https://git.sr.ht/~kennylevinsen/seatd)
- [hwdata](https://github.com/vcrhonek/hwdata)
- [libdisplay-info](https://gitlab.freedesktop.org/emersion/libdisplay-info)
- [libliftoff](https://gitlab.freedesktop.org/emersion/libliftoff)

If you want to build OpenWM for X11, you will also need:

- [X11](https://www.x.org/) (of course)
- [xcb](https://xcb.freedesktop.org/)
- [libxcb-render-util](https://gitlab.freedesktop.org/xorg/lib/libxcb-render-util)
- [libxcb-wm](https://gitlab.freedesktop.org/xorg/lib/libxcb-wm)
- [libxcb-errors](https://gitlab.freedesktop.org/xorg/lib/libxcb-errors) (optional but highly recommended)

### Building

1. Clone the repository
    ```bash
    git clone https://git.sr.ht/~mariluski/openwm && cd openwm
    ```
2. Run `make`
    ```bash
    make
    ```
3. Follow the instructions shown on the screen
4. Test
    ```bash
    cd ~ && openwm -v
    ```
5. Enjoy!

### Pre-compiled binaries

Pre-compiled binaries are available in `.deb`, `.rpm` and regular Linux binaries.

They can be found in the [Releases](https://github.com/TrieWM/TrieWM/releases) page.

## Configuration

OpenWM is highly configurable, and you can change almost everything.

You can find the configuration file in `~/.config/openwm/config.lua`.

### Table of options

---

| Option | Type | Description | Default |
| --- | --- | --- | --- |
| `keymap` | `table` | Options related to keymaps | --- |
| `keymap.layout` | `string` | The keyboard layout to use | `us` |
| `keymap.variant` | `string` | The keyboard variant to use | --- |
| `keymap.model` | `string` | The keyboard model to use | --- |
| `keymap.modkey` | `string` | The modifier key to use for keybindings | `meta` |
| `bar` | `table` | Options related to the bar | --- |
| `bar.height` | `number` | The height of the bar | `30` |
| `bar.position` | `string` | The position of the bar | `top` |
| `bar.radius` | `number` | The radius of the bar's corners | `2` |
| `bar.background_color` | `string` | The background color of the bar | `#000000` |
| `bar.foreground_color` | `string` | The foreground color of the bar | `#ffffff` |
| `bar.font` | `string` | The font to use for the bar | `JetBrains Mono 12` |

## Contributing

If you want to contribute, you can do so!

Note that **we use e-mail _flow_**: Use `git send-email` to send patches to the mailing list at `~mariluski/openwm-devel@lists.sr.ht`.

## Code of Conduct

Please read the [Code of Conduct](CODE_OF_CONDUCT.md) before contributing, chatting, etc.

## License

OpenWM is under the [GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.html).

>>>>>>> d22b44ebdd4dd5e9b8188b26efbf6fe56ca17690
