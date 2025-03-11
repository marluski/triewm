#![allow(irrefutable_let_patterns)]
#![allow(unused)]
/*
=====================================================================
=============       OpenWM - Open Window Manager       ===============
=====================================================================

This is the main file of OpenWM: An open-source, minimal, and customizable Window Manager for Linux.
*/
// Docs.rs comment thing
#![cfg_attr(docsrs, feature(doc_cfg))]
#![warn(missing_docs, missing_debug_implementations, rust_2018_idioms)]

//! # OpenWM
//! An **open-source**, minimal, and customizable Window Manager for Linux.
//!
//! OpenWM is **extremely lightweight**, and **highly customizable** written fully in **Rust**
//!
//! ## Features
//! - **Extremly lightweight**: OpenWM can be run on even the lowest-end hardware.
//! - **Customizable**: OpenWM can be configured to suit your needs.
//! - **Minimal**: OpenWM is designed to be as minimal as possible.
//! - **Open-source**: OpenWM is open-source, and can be modified and improved by anyone.
//!
//! ## Getting Started
//! To get started with OpenWM, you can follow the [Getting Started](https://man.sr.ht/) guide on the OpenWM wiki.

// Import Smithay and tracing
use smithay::*;
use tracing::{debug, error, warn};

// Import the cursor
mod cur;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    println!(
        "
 ▄██████▄   ▄█     █▄    ▄▄▄▄███▄▄▄▄
███    ███ ███     ███ ▄██▀▀▀███▀▀▀██▄
███    ███ ███     ███ ███   ███   ███ 
███    ███ ███     ███ ███   ███   ███
███    ███ ███     ███ ███   ███   ███
███    ███ ███     ███ ███   ███   ███
███    ███ ███ ▄█▄ ███ ███   ███   ███
 ▀██████▀   ▀███▀███▀   ▀█   ███   █▀  

Starting... This won't take long.
    "
    );

    return Ok(());
    // Checks for a config ($HOME/.config/openwm/config.lua) file
    let has_config = std::fs::metadata("$HOME/.config/openwm/config.lua");
    if has_config.is_err() {
        tracing::warn!("No configuration file found. Using default configuration.");
    }

    tracing::debug!("Loading cursor...");
    return Ok(());
}
