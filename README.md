# Character Inspector (C)

A simple, interactive command-line tool written in C that takes a single character input and displays its various data representations and memory size.

## Features
- **Character Display:** Prints the exact character entered.
- **Decimal Value:** Shows the unsigned ASCII decimal equivalent.
- **Hexadecimal Value:** Displays the 2-digit uppercase hex representation.
- **Binary Representation:** Uses bitwise operations and `CHAR_BIT` to print the exact binary bits.
- **Memory Size:** Displays the size of the character variable in bytes.

## Getting Started

### Prerequisites
You need a C compiler installed on your system (such as `gcc` or `clang`).

### Compilation & Execution
1. Clone the repository:
   ```bash
   git clone https://github.com
   cd char-inspector
   ```

2. Compile the source code:
   ```bash
   gcc char_inspector.c -o char_inspector
   ```

3. Run the program:
   ```bash
   ./char_inspector
   ```

## Example Usage
```text
Enter the letter: A

Choose an operation:
1. Print Character
2. Print Decimal
3. Print Hexadecimal
4. Print Binary
5. Print Variable Size
6. Print All Values
0. Exit
Choice: 6
Character: A
Decimal: 65
Hexadecimal: 41
Binary: 01000001
Size: 1 byte(s)
```
