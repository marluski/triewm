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
//! OpenWM is **extremely lightweight**, and **customizable**. It is written in Rust, and uses the [Smithay](https://github.com/Smithay/smithay) library.
//!
//! ## Features
//! - **Extremly lightweight**: OpenWM can be run on even the lowest-end hardware.
//! - **Customizable**: OpenWM can be configured to suit your needs.
//! - **Minimal**: OpenWM is designed to be as minimal as possible.
//! - **Open-source**: OpenWM is open-source, and can be modified and improved by anyone.
//!
//! ## Getting Started
//! To get started with OpenWM, you can follow the [Getting Started](https://github.com/mariluski/openwm/wiki/Getting-Started) guide on the OpenWM wiki.

mod bar;
mod configs;
mod utils;

fn main() {
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
}
