# Password Generator

Generates a password that's easier to remember than the likes of `GJWjv3!$$o`

It uses syntax rules loosely based on the Japanese language, creating syllables such as "a", "na", "ne", "ki", etc. 

The idea is that a moderately pronounceable password is much easier to remember than complete gibberish. Thus you can have a secure password that is also memorable.

## Usage

```bash
$ password-generator [length]
```

**length** (_optional_): the length of the password in syllables. Defaults to 4.

## Examples

```bash
$ password-generator 7
Password generated: auIhumAIge

$ password-generator 7
Password generated: SenAiwotOhAru

$ password-generator 3
Password generated: KAMAda
```

## Installation / Uninstallation

```bash
$ make                 # to just compile
$ sudo make install    # to install (compiles if there isn't already an executable)
$ sudo make uninstall  # to uninstall
```
