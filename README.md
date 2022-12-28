# 42_ft_printf

A simplified version of the C `printf` function, supporting the following format flags:
- `%c`: prints a character
- `%s`: prints a string
- `%d` and `%i`: prints an integer
- `%u`: prints an unsigned integer
- `%x`: prints an integer in lowercase hexadecimal notation
- `%X`: prints an integer in uppercase hexadecimal notation
- `%%`: prints a percentage symbol

To include the function in a project, simply add the ft_printf.a file generated by the makefile in the project linker.

## Examples of use:
* "ft_printf("Hello World\n");"
* "ft_printf("%s\n", "Hello World");"
* "ft_printf("%c%c%c%c%c World", 'H', 'e', 'l', 'l', 'o');"