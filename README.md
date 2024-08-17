![Printf](./printf.png)

# Project: 0x11. C - printf

A custom implementation of the `printf` function in C.

## Table of Contents

- Description
- Features
- Installation
- Usage
- Contributing
- Experience Gained
- Authors

## Description

This project provides a custom implementation of the `printf` function in C. The `printf` function is widely used for formatted output in C programming. This implementation aims to replicate the functionality of the standard `printf` function, supporting various format specifiers and flags.

## Features

- Supports various format specifiers:
    - `"c"`: prints a character.
    - `"s"`: prints a string.
    - `"r"`: prints a string in reverse.
    - `"R"`: prints a string in ROT13.
    - `"d"`: prints an integer.
    - `"i"`: prints an integer.
    - `"u"`: prints an unsigned integer.
    - `"x"`: prints a number in hexadecimal (lowercase).
    - `"X"`: prints a number in hexadecimal (uppercase).
    - `"o"`: prints an octal number.
    - `"b"`: prints the binary representation of an unsigned decimal.
    - `"S"`: prints a string with non-printable characters replaced by their ASCII code in hexadecimal.
    - `"p"`: prints a pointer address.

    If the specifier provided does not match any of the above, the function returns `NULL`.

- Handles flags such as:
    - `#`: This is the "alternate form" flag. When this flag is set, `printf` modifies the output of 'o', 'x', 'X', 'a', 'A', 'e', 'E', 'f', 'F', 'g', and 'G' type specifiers with different behaviors for each specifier.

    - `' '` (space): This flag is used to insert a space before the output when positive signed types are converted and no sign is going to be written. It's ignored if the '+' flag exists.

    - `+`: This flag forces the output to be prepended with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a - sign.

## Installation

To use this custom `printf` function in your project, follow these steps:

1. Clone the repository:
    ```sh
    git clone https://github.com/hackerSa3edy/printf.git
    ```

2. Navigate to the project directory:
    ```sh
    cd printf
    ```

3. Compile the source files:
    ```sh
    gcc -Wall -Wextra -Werror -pedantic *.c -o printf
    ```

    - The command `gcc` is used to compile C files. Here's what each flag does:

        - `-Wall`: This flag enables all the warnings about constructions that some users consider questionable, and that are easy to avoid.

        - `-Wextra`: This flag enables some extra warning flags that are not enabled by `-Wall`.

        - `-Werror`: This flag makes all warnings into errors. Compilation stops if a warning is triggered.

        - `-pedantic`: This flag is used to issue all the warnings demanded by strict ISO C and ISO C++. This includes some warnings such as when you use features that are supported by GCC but are not part of the official ISO C standard.

        - `*.c`: This is a wildcard that matches all files in the current directory that end with the `.c` extension. These are the files that will be compiled.

        - `-o printf`: This flag is followed by the name of the output file. In this case, the output file will be named `printf`. If this flag is not used, the output file is named `a.out` by default.


## Usage

Include the header file in your C program:
```c
#include "main.h"
```

Use the custom printf function as you would with the standard printf:
```c
int main(void)
{
    _printf("Hello, World!\n");
    _printf("Number: %d\n", 42);
    return 0;
}
```

## Contributing
Contributions are welcome! If you have any improvements or bug fixes, please fork the repository, create a new branch, and submit a pull request.

1. Fork the repository.
2. Create a new branch:
```bash
git checkout -b feature-branch
```

3. Make your changes and commit them:
```bash
git commit -m "Description of changes"
```

4. Push to the branch:
```bash
git push origin feature-branch
```

5. Open a pull request.

## Experience Gained
Working on this project provided valuable experience in several areas:

- **Understanding of C Programming**: Deepened my knowledge of C, particularly in handling formatted output and string manipulation.
- **Algorithm Design**: Improved my skills in designing algorithms to handle various format specifiers and flags.
- **Debugging and Testing**: Enhanced my ability to debug complex code and write comprehensive test cases to ensure functionality.
- **Code Optimization**: Learned techniques to optimize code for better performance and efficiency.
- **Collaboration**: Gained experience in using version control systems like Git for collaboration and project management.

## Authors
- [Abdelrahman Mohamed](https://github.com/hackerSa3edy)
- [Tahani Sabir](https://github.com/Tahani-Saber)
