# simple_shell

A shell is a command-line interpreter that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.

## Description

Our simple version of a shell, it takes a command as an input and check if it's a built-in or an alias, if it's, it'll proceed with the instructions given for each case, in case it's not, our shell will check into each address taken from the global variable PATH for a file who has the same name as the command entered into our program, once a file with the same name is found in any of the paths, the program will check if it's executable, in case it's, exceve will be 

## Usage

This project should be compiled with the following command:
```bash
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
```

## Code Samples

```c
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int len;
        int len2;
        char *p;

        p = NULL;
        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("Character:[%c] TEXT\n", 'H');
        printf("Character:[%c]\n", 'H');
        len = _printf("String:[%s]\n", "I am a string !");
        len2 = printf("String:[%s]\n", "I am a string !");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        printf("counter: [%d]\n", len);
        printf("Counter: [%d]\n", len2);
        len = _printf("%s", p);
        len2 = printf("Percent:[%%%]\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        _printf("Unknown:[%r]\n");
        printf("Unknown:[%r]\n");
        return (0);
}
```

## Contributors

* Jhon Arias
* Juan Quintero

## Contributing
Pull requests are welcome.

## Characters

Special characters that can be passed in the string to be formatted:

* %d or %i got replaced by the value of an integer variable
* %c got replaced by the value of a character variable
* %s got replaced by the value of a string variable

