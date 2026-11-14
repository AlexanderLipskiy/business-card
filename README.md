# Personal Business Card

A console program that prints a developer business card.
Written in C++20 as part of my learning path.

## Build and run

- From Visual Studio
1. Open `business-card.cpp` in Visual Studio.
2. Press `Ctrl+Shift+B` to build and `Ctrl+F5` to run.
- From Developer PowerShell
```
sl /nologo /EHsc /std:c++20 /W4 /utf-8 business-card.cpp
.\business-card.exe
```

## Example output

```
***********************
* Dev's Business card *
***********************
```

## Last Update

14 November 2026

Refactor: extract formatting logic into functions and use iomanip

- Move business card sections into separate functions for better readability
- Replace manual spacing with iomanip manipulators (setw, left/right)


## Author

Alexander Lipskiy