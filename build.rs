// SPDX-License-Identifier: GPL-3.0-only

// Copyright (C) 2019 Mario Rosell <mar1lusk1@proton.me>
// under the GNU GPLv3 license.

use std::env;
use std::fs;
use std::path::Path;

fn main() {
    println!("        |\\˜¨¯¨˜'\\       |\\˜¨¯¨˜\\'               '|'˜¨¯¨'˜¯\\/'˜¨¯¨'˜˜¨¯'\\‚");
    println!("   /˜¨¯¨˜'/\\     '\\ °   | |      |'/˜¨¯¨˜/|‚     /             '/|\\       \'‚");
    println!(" /      /  '\\       \'   \\/     '/'|      | |‚    '|      '|\\    '/ / |       |");
    println!(" |      |   '|       |'  '/     '/  '\\     '\\/    '/      '/\\ \\_/ / /       /|");
    println!(" |      |   '|       | ' |     '|/¯\\ \\     '\\‚  '|       |  \\|_|/ /       / '|");
    println!(" |\\     '\\  /      '/|'  |\\¸_¸_'/\\  \\'|     '|‚ |\\¸_¸_¸\\       |¸_¸_¸'|  /‘");
    println!(" | '\\¸_¸¸'\\/¸_¸_¸/ |'‚ | |˜¨¯¨|  '\\¸_¸_¸¸/|°| |˜¨¯¨˜'|      '|˜¨¯¨˜˜'| /‘");
    println!("  \\ |˜¨¯¨'||˜¨¯¨'| '/   '\\|¸_¸¸'|/\\ |˜¨¯¨˜| '|'‚ \\|¸_¸_¸|      '|¸_¸_¸'|/'");
    println!("   '\\|¸_¸¸'||¸_¸¸'|/      ¯\\(¯  '\\|¸_¸_'|/'     ¯\\(¯         '¯)/¯'  '");
    println!("                                                                '");

    println!("Thanks for installing OpenWM!");
    println!("OpenWM is an extremely minimal Wayland compositor.");
    println!("\n OpenWM is *free software* and collects no data.");
    println!("You can contribute to OpenWM at https://github.com/mariluski/openwm");

    // Building process
    let out_dir = env::var_os("OUT_DIR").expect("OUT_DIR is not set");
    let out_path = Path::new(&out_dir);

    println!("cargo:rerun-if-changed=build.rs");

    // Get every file in the directory
    for entry in fs::read_dir("src").expect("Failed to read src directory") {
        let entry = entry.expect("Failed to read directory entry");
        let path = entry.path();
        let new_path = out_path.join(path.file_name().expect("Failed to get file name"));

        // Copy the file
        if let Err(e) = fs::copy(&path, &new_path) {
            println!(
                "cargo:warning=Could not copy file {}: {}",
                path.display(),
                e
            );
        }
    }

    println!("cargo:rerun-if-changed=main.rs");
}

