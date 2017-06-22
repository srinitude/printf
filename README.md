## _printf
The functions in the printf family produce output according to a format.
**Prototype:** int _printf(const char *format, ...);
##Description
This is an individualized ```printf``` instructions for the usuage of functions, created by Holberton School for batch 3 students.  This project's purpose is for batch 3 students to  write their own printf function based on the C programming knowledge introduced May 1, 2017.
## Examples
**Character:**  ```
		printf("%c", 'A');
		```
**Output::** A

**String:** ```
	    printf("%s", 'This is a string.');
	    ```
**Output:** This is a string.

**Integer:**  ```
	      printf("%i", 5);
	      ```
**Output:** 5
##Requirements
* All your files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file
* Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Global variables are not allowed
* No more than 5 functions per file
* The main.c files are examples to test the functions.
* The prototypes of all functions should be included in the header file called holberton.h
* All header files should be include guarded
* Authorized functions and macros:
  * write (man 2 write)
  * malloc (man 3 malloc)
  * free (man 3 free)
  * va_start (man 3 va_start)
  * va_end (man 3 va_end)
  * va_copy (man 3 va_copy)
  * va_arg (man 3 va_arg)
## Tasks
Number | Description
------ | -----------
0      | Write a function that produces output with conversion specifiers: c, s, and %.
1      | Handle conversion specifiers: d, i.
## File Description
* **conversion_spec_printing.c**
* **holberton.h**
* **man_3_printf**
* **ordinary_char_printing.c**
* **printf.c**
## Authors
Alexa Inga | https://github.com/AlexaInga2

Kiren Srinivasan | https://github.com/srinitude