# argparse

<img src="https://img.shields.io/badge/Donna-argparse-FF6347?style=for-the-badge" alt="Donna argparse"/>

<a href="https://donna-lang.github.io/argparse/">
  <img src="https://img.shields.io/badge/Docs-Read-2F81F7?style=for-the-badge" alt="Docs - Read"/>
</a>

CLI argument parsing for the [Donna](https://github.com/donna-lang/donna) programming language.

## Overview

`argparse` converts command-line arguments into simple `#(String, String)` pairs.

It supports long flags, long named values, `--key=value` arguments, short flags, short named values, and positional arguments.

## Installation

Add to your `donna.toml` as a dependency:

```toml
[dependencies]
argparse = { git = "https://github.com/donna-lang/argparse", version = ">=0.1.0 and <1.0.0" }
```

Then import the module:

```donna
import argparse
```

## Quick start

```donna
import argparse

pub fn main() -> Nil:
  let args = argparse.from_argv()
  let output = argparse.get(args, "output")
  let verbose = argparse.has(args, "verbose")
  let files = argparse.positional(args)

  echo output
```

For tests or custom parsing, use `parse` directly:

```donna
import argparse

pub fn parse_example() -> String:
  let args = argparse.parse(["--output=site", "--verbose", "content.md"])
  argparse.get(args, "output")
```

Run:

```sh
donna test
```

## API

For API Reference visit the generated docs [here](https://donna-lang.github.io/argparse/)

## Argument forms

```text
--flag        -> #("flag", "true")
--key value   -> #("key", "value")
--key=value   -> #("key", "value")
-v            -> #("v", "true")
-o out.txt    -> #("o", "out.txt")
file.txt      -> #("", "file.txt")
```

## Licence

MIT
