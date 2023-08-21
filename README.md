# ALX School printf Project

This repository contains the source code for a custom implementation of the `printf` function in C, developed as part of the ALX School curriculum. The goal of this project is to recreate the functionality of the standard C library's `printf` function.

## Project Files

Here is a brief overview of the files included in this repository:

- `hexa_handlers.c`: This file contains functions to handle hexadecimal format specifiers.
- `main.h`: The header file containing function prototypes and macro definitions.
- `number_handlers.c`: This file contains functions to handle numeric format specifiers.
- `_printf.c`: The main implementation of the custom `printf` function.
- `printf_helper.c`: This file contains helper functions used by `_printf.c`.
- `special_handlers.c`: Functions to handle special format specifiers.
- `string_handlers.c`: Functions to handle string format specifiers.
- `utils.c`: Utility functions used throughout the project.
- `README.md`: This file, which provides an overview of the project.

## Usage

To use this custom `printf` function in your C programs, follow these steps:

1. Clone this repository to your local machine.

2. Include the `main.h` header file in your C source file where you want to use `printf`:

    ```c
    #include "main.h"
    ```

3. Call the custom `printf` function with the desired format string and arguments, just like you would with the standard `printf`:

    ```c
    int main(void)
    {
        int num = 42;
        char *str = "Hello, ALX School!";
        
        _printf("This is a number: %d\n", num);
        _printf("This is a string: %s\n", str);
        
        return (0);
    }
    ```

4. Compile your program with the custom `printf` implementation:

    ```shell
    gcc -o my_program my_program.c _printf.c number_handlers.c hexa_handlers.c special_handlers.c string_handlers.c utils.c
    ```

5. Run your program:

    ```shell
    ./my_program
    ```

## Format Specifiers

This custom `printf` implementation supports a variety of format specifiers, including:

- `%c`: Print a character.
- `%s`: Print a string.
- `%%`: Print a percent sign.
- `%d` and `%i`: Print integers.
- `%b`: Print binary.
- `%u`: Print unsigned integers.
- `%o`: Print octal integers.
- `%x`: Print hexadecimal in lowercase.
- `%X`: Print hexadecimal in uppercase.
- `%r`: Print a reversed string.
- `%R`: Print a string in ROT13 encryption.
- `%p`: Print a pointer address.

Please refer to the header file `main.h` for a complete list of format specifiers and their corresponding functions.

## Contributing

If you'd like to contribute to this project or report any issues, please feel free to open an issue or submit a pull request on the GitHub repository.

Thank you for using this custom `printf` implementation!
