# Character Inspector (C)

A simple, interactive command-line tool written in C that takes a single character input and displays its various data representations and memory size, with the ability to inspect multiple characters in a single session.

## Features
* **Character Display:** Prints the exact character entered.
* **Decimal Value:** Shows the unsigned ASCII decimal equivalent.
* **Hexadecimal Value:** Displays the 2-digit uppercase hex representation.
* **Binary Representation:** Uses bitwise operations and `CHAR_BIT` to print the exact binary bits.
* **Memory Size:** Displays the size of the character variable in bytes.
* **Dynamic Character Switching:** Allows entering and inspecting a new character on the fly without restarting the program.
* **Robust Input Handling:** Safely clears the input buffer to prevent infinite loops or crashes on invalid inputs.

## Getting Started

### Prerequisites
You need a C compiler installed on your system (such as `gcc` or `clang`).

### Compilation & Execution

1. **Clone the repository:**
   ```bash
   git clone https://github.com
   cd char-inspector
   ```

2. **Compile the source code:**
   ```bash
   gcc char_inspector.c -o char_inspector
   ```

3. **Run the program:**
   ```bash
   ./char_inspector
   ```

## Example Usage

```text
Enter a letter: A

--- Current Letter: 'A' ---
1. Print Character
2. Print Decimal
3. Print Hexadecimal
4. Print Binary
5. Print Variable Size
6. Print All Values
7. Enter a new letter
0. Exit
Choice: 6
Character: A
Decimal: 65
Hexadecimal: 41
Binary: 01000001
Size: 1 byte(s)

--- Current Letter: 'A' ---
1. Print Character
2. Print Decimal
3. Print Hexadecimal
4. Print Binary
5. Print Variable Size
6. Print All Values
7. Enter a new letter
0. Exit
Choice: 7
Enter the new letter: z
Letter updated to 'z'!
```
