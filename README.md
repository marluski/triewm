# OpenWM

OpenWM is an **extremely minimal**, **open-source** and **free** Window Manager for Linux.

## Features

- Fast
- Based on Wayland
- Minimal (Text)
- Supports graphical applications
- Supports multiple monitors

## Installation

<!-- TODO: Make this section. -->

## Customization

OpenWM is **highly customizable**.

OpenWM already comes with a pretty *decent* config witht the Tokyo-Night theme.

The config is located in `~/.config/openwm/config.lua`.

> [!IMPORTANT]
> The config is **not** automatically generated.
> You need to manually create the config file.

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

Themes are located in `~/.config/openwm/themes`.

> [!TIP]
> Themes are like configurations you can easily switch between.

## Contributing

If you want to contribute to OpenWM, please read the [contributing guidelines](CONTRIBUTING.md).

### Quick notice

- OpenWM uses the [Rust](https://www.rust-lang.org/) programming language.
- OpenWM uses the [Wayland](https://wayland.freedesktop.org/) protocol.
- The GitHub repository is a mirror. The original repository is [in SourceHut](https://git.sr.ht/~mariluski/openwm).
- OpenWM is made with Smithay.
- We have a .prettierrc file. Use it to format your code.
- Use LF line endings.
- Use tabs equivalent to 4 spaces for indentation.
- If you have any questions, feel free to ask in out [Matrix room](https://matrix.to/#/#openwm:matrix.org).
- Have fun!

## License

OpenWM is licensed under the **GNU General Public License v3.0**.

You can find code here [on SourceHut](https://git.sr.ht/~mariluski/openwm) or [on GitHub](https://github.com/mariluski/openwm).

> [!WARNING]
> Again, the GitHub repository is a mirror.
> We do not check the repo or anything: It is just for convenience.

### License (in short)

You can use this for whatever you want. But make sure it is [free software](https://opensource.org/osd).

> [!NOTE]
> Free software isn't that it has zero cost: It is that its code is open and you can use it.
> Also, the license has to be the [GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.en.html).
