<div align="center">
    <h1>TrieWM</h1>

    <ul>
    <li><a href="#about">About</li>
    <li><a href="#features">Features</a></li>
    <li><a href="#installation">Installation</a></li>
    <li><a href="#keybinds">Keybinds</a></li>
    <li><a hreff="#customization">Customization</a></li>
    <li><a href="#everything_search">Everything search</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    </ul>
</div>

## About

TrieWM is a tiling window manager for Wayland and X11.

It was made to have all the features missing from every tiling window manager: Auto-tiling, floating windows, animations, and more.

## Features

- Customizable
- Modular
- Extensible
- Fast
- Based on Wayland
- Minimal
- Supports graphical applications
- Supports multiple monitors
- Animations
- Auto-tiling
- Floating windows
- Customizable
- Easy to use
- Transparency effects
- Shadow effects
- Blur effects
- Comes with a helpful deamon that helps you do things like change the brightness, volume, and more.
- Has a bar.

## Installation

Installing Trie is pretty easy.

Also, if you use BSD, you can also use Trie.
We also have an AUR package for Trie (`triewm` and `triewm-git`).

> Note: The only installation method is currently building from source.
> The process is easy though.

### Building from source

1. Clone the repository
```bash
git clone https://git.sr.ht/~mariluski/triewm
```
2. Use `make` to build the project
```bash
make
```
3. For the first question, you can just press enter to use `clang` as the compiler. Change this if you want.
4. For the second question, just press `y` to confirm
5. Press `y` if you want to move the binary to `/usr/local/bin`. This will let you run TrieWM with `triewm` in the terminal.
6. Test the installation by running `triewm -v` in the terminal.
7. Enjoy!

## Keybinds

TrieWM has keybinds made specifically for you to not move your fingers around.

| Key | Action |
| --- | --- |
| <kbd>Alt</kbd> + <kbd>q</kbd> | Switch to the next workspace |
| <kbd>Alt</kbd> + <kbd>a</kbd> | Open the terminal |
| <kbd>Alt</kbd> + <kbd>w</kbd> | Open the web browser |
| <kbd>Alt</kbd> + <kbd>f</kbd> | Open the file manager |
| <kbd>Alt</kbd> + <kbd>1</kbd> - <kbd>9</kbd> | Switch to the [tag](#tags) with the number specified |
| `$mod + <space>` | Open *[Everything search](#everything_search)* |

# Frequently Asked Questions

## What are the differences between TrieWM and OpenWM?

OpenWM was the old name of TrieWM.

It got renamed because of obvious reasons.

## What are tags?

Tags are in 90% of the use cases the same as workspaces.

You can think of them like *groups of windows*.
However, a window can be in multiple tags and you can show multiple tags at the same time.

## What is the difference between tiling and floating?

Tiling windows just automatically place your windows in a [golden spiral](https://en.wikipedia.org/wiki/Golden_spiral) layout.

Floating windows are your regular windows: you can move them around, resize them, and so on.

## Why shall I use TrieWM and not anything else?

Well, it is **your** decision use what you want. No one is forcing you to use Trie.
As everything in life, it also has its own advantages and disadvantages.

But Trie's advantages *might* convince you to use Trie.

## Is Trie safe?

Yes. Trie is **safe** and collects no data.

## Customization

TrieWM is **highly customizable**.

TrieWM already comes with a basic config.

The config is located in `~/.config/trie/config.lua`.

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
### Configuring

The config is a **Lua** file.

Lua is a **lightweight**, **embeddable** scripting language used in many applications: Like Neovim, ROBLOX, and many more.

> [!TIP]
> Lua is a **real** programming language, so you can write *helpers* to make your life easier.

The configuration is inside the `config` table.

#### Options

---

| Option | Type | Description |
| --- | --- | --- |
| `theme` | String | What theme to use. See [Themes](#themes) |
| `modifier` | String | What modifier to use. Defaults to the Windows / Meta key (mod4) |
| `bar.floating` | Boolean | Whether to show the bar floating (not fully attached to the edge of the screen) or not |
| `bar.height` | Number | The height of the bar |
| `bar.width` | Number | The width of the bar |
| `bar.fillsx` | Boolean | Whether to make the bar fill the whole `x` |
| `bar.background` | String | The background color of the bar |
| `bar.position` | String | The position of the bar. Can be `top`, `bottom`, `left` or `right` |
| `bar.font` | String | The font to use for the bar |
| `bar.elements` | Array | The elements to show in the bar |
| `bar.elements.keybinds` | Boolean | Whether to show the keybinds in the bar or not |
| `bar.elements.workspaces` | Boolean | Whether to show the workspaces in the bar or not |
| `bar.elements.workspaces.first` | Table | The first workspace to show in the bar |
| `bar.elements.workspaces.first.color` | String | The color of the first workspace |
| `bar.elements.workspaces.first.icon` | String | The icon of the first workspace |
| `bar.elements.workspaces.second` | Table | The second workspace to show in the bar |
| `bar.elements.workspaces.second.color` | String | The color of the second workspace |
| `bar.elements.workspaces.second.icon` | String | The icon of the second workspace |
| `bar.elements.workspaces.third` | Table | The third workspace to show in the bar |
| `bar.elements.workspaces.third.color` | String | The color of the third workspace |
| `bar.elements.workspaces.third.icon` | String | The icon of the third workspace |
| `bar.elements.workspaces.fourth` | Table | The fourth workspace to show in the bar |
| `bar.elements.workspaces.fourth.color` | String | The color of the fourth workspace |
| `bar.elements.workspaces.fourth.icon` | String | The icon of the fourth workspace |
| `bar.elements.workspaces.fifth` | Table | The fifth workspace to show in the bar |
| `bar.elements.workspaces.fifth.color` | String | The color of the fifth workspace |
| `bar.elements.workspaces.fifth.icon` | String | The icon of the fifth workspace |
| `bar.elements.workspaces.sixth` | Table | The sixth workspace to show in the bar |
| `bar.elements.workspaces.sixth.color` | String | The color of the sixth workspace |
| `bar.elements.workspaces.sixth.icon` | String | The icon of the sixth workspace |
| `bar.elements.workspaces.seventh` | Table | The seventh workspace to show in the bar |
| `bar.elements.workspaces.seventh.color` | String | The color of the seventh workspace |
| `bar.elements.workspaces.seventh.icon` | String | The icon of the seventh workspace |
| `bar.elements.workspaces.eighth` | Table | The eighth workspace to show in the bar |
| `bar.elements.workspaces.eighth.color` | String | The color of the eighth workspace |
| `bar.elements.workspaces.eighth.icon` | String | The icon of the eighth workspace |
| `bar.elements.workspaces.nineth` | Table | The ninth workspace to show in the bar |
| `bar.elements.workspaces.nineth.color` | String | The color of the ninth workspace |
| `bar.elements.workspaces.nineth.icon` | String | The icon of the ninth workspace |
| `bar.elements.layout` | Boolean | Whether to show the layout in the bar or not |
| `bar.elements.title` | Boolean | Whether to show the title in the bar or not |
| `bar.elements.wincontrols` | Boolean | Whether to show the window controls in the bar or not |

#### Themes

Themes are located in `~/.config/trie/themes`.

> [!TIP]
> Themes are like configurations you can easily switch between.

Trie comes with three themes: Retro, Nord, and Tokyo-Night.

## Everything search

*Everything search* is a *rip-off* of MacOS' *Spotlight* with a few extra features.

It is a program that lets you search your computer for files, applications, use a calculator, search the web, control your music, etc.

Spawn Everything with <kbd>


## Contributing

If you want to contribute to TrieWM, please read the [contributing guidelines](CONTRIBUTING.md).

## License

TrieWM is licensed under the **GNU General Public License v3.0**.

You can find code here [on SourceHut](https://git.sr.ht/~mariluski/openwm) or [on GitHub](https://github.com/mariluski/openwm).

> [!WARNING]
> Again, the GitHub repository is a mirror.
> We do not check the repo or anything: It is just for convenience.
