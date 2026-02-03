# Overview

ft_printf is a custom implementation of the standard printf function in C, developed as part of the 42 curriculum.
The project focuses on recreating formatted output functionality while deepening understanding of variadic functions, format parsing, and low-level output handling.

This project helped strengthen skills in:
-Variadic functions (stdarg.h)
-Parsing and formatting
-Memory management
-C programming fundamentals

# Objectives
-Reimplement the behavior of the standard printf function.
-Understand how format specifiers and flags are parsed and processed.
-Handle different data types and conversions.
-Improve problem-solving and debugging skills in C.

# Resources

The following resources were used during the development of this project:
-The C Programming Language (K&R)
-42 Network Documentation
-Linux man pages (man printf, man stdarg)

# Supported Features
✅ Conversion Specifiers
-%c – character
-%s – string
-%p – pointer
-%d / %i – signed integers
-%u – unsigned integers
-%x / %X – hexadecimal (lowercase / uppercase)
-%% – percent

# How It Works
The ft_printf function parses the format string character by character.
When a % is encountered, it analyzes the following characters to determine the conversion type and
prints the corresponding argument using variadic functions (va_start, va_arg, va_end).

# Use of AI in This Project
AI tools were used as supportive learning resources, not as direct sources of solutions.
AI was used to:
-Explain concepts related to variadic functions and format parsing.
-Help identify edge cases and debugging strategies.
-Improve documentation and code clarity.
-All core logic and implementations were written manually to ensure a strong understanding of C programming principles.  



