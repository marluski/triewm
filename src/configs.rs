// SPDX-License-Identifier: GPL-3.0-only

use crate::utils::{Color, UDLRPositions};

// Bar configurations

/// An `struct` with different configurations for the bar widget.
pub struct BarConfig {
    pub height: u16,
    pub background_color: Color,
    pub border_color: Color,
    pub border_radius: u32,
    pub border_width: u32,
    pub margin: u8,
    pub padding: u8,
    pub floating: bool,
    pub font: String,
    pub font_size: u16,
    pub font_color: Color,
    pub uses_icons: bool,
    pub bar_items: Vec<BarItem>,
    pub bar_position: UDLRPositions,
}

/// An `enum` representing different items that can be placed in the bar.
pub enum BarItemType {
    WindowControls,
    WorkspaceControls,
    SystemControls,
    Spacer,
    Keybinds,
    Menus,
    Clock,
}

/// A `struct` representing a single bar item with: Type, Icon (if applicable), and Text.
pub struct BarItem {
    pub bar_item_type: BarItemType,
    pub has_icon: bool,
    pub icon: String,
    pub text: String,
    pub text_color: Color,
}

impl Default for BarItem {
    fn default() -> Self {
        Self {
            bar_item_type: BarItemType::WindowControls,
            has_icon: false,
            icon: String::from(""),
            text: String::from(""),
            text_color: Color::new(0, 0, 0),
        }
    }
}

// Desktop configurations

/// An `enum` representing the three different wallpaper types: Image, Color, or Gradient.
#[derive(Debug, Clone)]
pub enum WallpaperType {
    Image(String),
    Color(Color),
    Gradient(Color, Color),
}

/// A `struct` representing the desktop configurations.
pub struct DesktopConfig {
    wallpaper_type: WallpaperType,
    wallpaper_color_a: Color,
    wallpaper_color_b: Color,
    wallpaper_image: String,
}

impl Default for DesktopConfig {
    fn default() -> Self {
        Self {
            wallpaper_type: WallpaperType::Color(Color::new(0, 0, 0)),
            wallpaper_color_a: Color::new(0, 0, 0),
            wallpaper_color_b: Color::new(0, 0, 0),
            wallpaper_image: String::from(""),
        }
    }
}

// General configurations

/// A `struct` representing the general configurations.
pub struct GeneralConfig {
    pub borderless: bool,
    pub resize_with_mouse: bool,
    pub workspace_names: Vec<String>,
    pub reload_on_change: bool,
}

impl Default for GeneralConfig {
    fn default() -> Self {
        Self {
            borderless: false,
            resize_with_mouse: false,
            workspace_names: vec![
                "1".to_string(),
                "2".to_string(),
                "3".to_string(),
                "4".to_string(),
                "5".to_string(),
                "6".to_string(),
                "7".to_string(),
                "8".to_string(),
                "9".to_string(),
            ],
            reload_on_change: false,
        }
    }
}

// Window configurations

/// A `struct` representing the window configurations.
pub struct WinConfig {
    pub has_border: bool,
    pub border_color: Color,
    pub border_radius: u32,
    pub border_width: u32,
    pub margin: u8,
    pub padding: u8,
    pub font_color: Color,
    pub uses_icons: bool,
    pub window_controls: Vec<WinCtrl>,
    pub default_desktop: u8,
    pub titlebar_size: u16,
    pub titlebar_color: Color,
    pub titlebar_font: String,
    pub titlebar_font_size: u16,
}

impl WinConfig {
    /// Constructs a `WinConfig` struct with the default configurations.
    pub fn new() -> Self {
        Self {
            has_border: true,
            border_color: Color::new(0, 0, 0),
            border_radius: 0,
            border_width: 0,
            margin: 0,
            padding: 0,
            font_color: Color::new(0, 0, 0),
            uses_icons: true,
            window_controls: vec![WinCtrl::Close, WinCtrl::Maximize, WinCtrl::Minimize],
            default_desktop: 0,
            titlebar_size: 0,
            titlebar_color: Color::new(0, 0, 0),
            titlebar_font: String::from("sans-serif"),
            titlebar_font_size: 0,
        }
    }
}

/// An `enum` representing the different window controls.
pub enum WinCtrl {
    Close,
    Maximize,
    Minimize,
    Pin,
    Fullscreen,
}

// Construct everything

/// A `struct` representing the configurations for the whole program.
struct StructConfigs {
    pub general: GeneralConfig,
    pub desktop: DesktopConfig,
    pub win: WinConfig,
    pub bar: BarConfig,
}

impl StructConfigs {
    /// Constructs a `StructConfigs` struct with the default configurations.
    pub fn new() -> Self {
        Self {
            general: GeneralConfig::new(),
            desktop: DesktopConfig::new(),
            win: WinConfig::new(),
            bar: BarConfig::new(),
        }
    }
}

/// All the configurations for the program in a single `StructConfigs` struct.
pub static CONFIGS: Lazy<StructConfigs> = Lazy::new(|| StructConfigs::new());
