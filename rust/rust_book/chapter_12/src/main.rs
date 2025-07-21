use std::{env, error::Error, fs, process};
use chapter_12::Config;


fn main() {
    let args: Vec<String> = env::args().collect();

    let config = Config::build(env::args()).unwrap_or_else(|err| {
        eprintln!("Problem parsing arguments: {err}");
    });

    if let Err(e) = chapter_12::run(config) {
        eprintln!("Application error: {e}");
        process::exit(1);
    }
}
