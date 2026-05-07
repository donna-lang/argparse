# Changelog

All notable changes to `argparse` will be documented in this file.

## [0.1.0] — 2026-05-07

Initial release.

### Added

- `argparse.from_argv` — parse command-line arguments from the running process
- `argparse.parse` — parse `List(String)` into key-value argument pairs
- `argparse.get` — read a named argument value, or `""` when missing
- `argparse.has` — test whether a named argument or flag is present
- `argparse.positional` — return positional arguments in source order
- Support for long flags like `--verbose`
- Support for long named arguments like `--output out.html`
- Support for long equals arguments like `--output=out.html`
- Support for short flags and values like `-v` and `-o out.html`
- Support for mixed named, flag, and positional arguments
- C FFI bridge for process `argv`
- Self tests covering flags, named values, positional arguments, and edge cases
