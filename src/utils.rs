//! An `enum` with four different positions: Up, Down, Left, Right (UDLR).
#[derive(Debug, Clone, Copy)]
pub enum UDLRPositions {
    Up,
    Down,
    Left,
    Right,
}

/// An `struct` that represents a color.
#[derive(Debug, Clone, Copy)]
pub struct Color {
    pub r: u8,
    pub g: u8,
    pub b: u8,
}

impl Color {
    /// Constructs a `Color` struct with the given RGB values.
    pub fn new(r: u8, g: u8, b: u8) -> Self {
        Self { r, g, b }
    }
    pub fn from_hex(hex: String) -> Self {
        let hex = hex.trim_start_matches('#');
        let r = u8::from_str_radix(&hex[0..2], 16).unwrap();
        let g = u8::from_str_radix(&hex[2..4], 16).unwrap();
        let b = u8::from_str_radix(&hex[4..6], 16).unwrap();
        Self { r, g, b }
    }
}
