# 42cursus-01-get_next_line
## :books: About the project 
The aim of this project is to make you code a function that returns a line ending with a newline, read from a file descriptor.

## Score
(COLOCAR PRINT DA NOTA)

### Functions in `<get_next_line.c>` & `<get_next_line_bonus.c>`
* [ft_read]() - read nbytes from a file descriptor(fd) into a buffer starting with puff.
* [get_next_line]() - takes an open file descriptor and returns its next line. If successful, get_next_line returns a string with the line integer ending in a line break ('\n') if any. If it happens an error or if there is nothing left to read, it returns NULL.

### Functions in `<get_next_line_utils.c>` & `<get_next_line_utils_bonus.c>`
* [ft_strlen]() - calculate array lenght 
* [ft_strchr]() - finds the first occurrence of a character
* [ft_strjoin]() - returns a new string, which is the result of concatenating two strings
* [ft_get_line]() - extracts the line (ending in newline and '\0' in EOF) from static variable. Returns string with full line ending in '\n'
* [ft_new_line]() - stores in the cumulative static variable the new variable updated with what remains of the original minus the extracted line. Return: The new string updated with what's left of the original static,
minus the extracted row.

## :computer: Compiling the project
The library is written in C language and thus needs the -cc compiler and some standard C libraries to run.

**Instruction**
1. Compiling the library

         $ cc get_next_line.c get_next_line.h get_next_line_utils.c

2. Execute your program

         $ ./a.out
(COLOCAR PRINT DA EXECUCAO)        

## :lady_beetle: Testing 

**Third-party testers used in the project**

* [Tripouille/gnlTester](https://github.com/Tripouille/gnlTester) 

(COLOCAR PRINT DO TESTE)
