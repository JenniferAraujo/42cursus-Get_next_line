# 42cursus-01-get_next_line
## :books: About the project 
The aim of this project is to make you code a function that returns a line ending with a newline, read from a file descriptor.

## Score
![thumbnail_IMG_9160](https://user-images.githubusercontent.com/106436743/205647649-4ed3b72d-54a6-428f-8e52-56806a024983.jpg)

### Functions in `<get_next_line.c>` & `<get_next_line_bonus.c>`
* [ft_read](https://github.com/JenniferAraujo/42cursus-01-get_next_line/blob/main/get_next_line.c) - read nbytes from a file descriptor(fd) into a buffer starting with puff.
* [get_next_line](https://github.com/JenniferAraujo/42cursus-01-get_next_line/blob/main/get_next_line.c) - takes an open file descriptor and returns its next line. If successful, get_next_line returns a string with the line integer ending in a line break ('\n') if any. If it happens an error or if there is nothing left to read, it returns NULL.

### Functions in `<get_next_line_utils.c>` & `<get_next_line_utils_bonus.c>`
* [ft_strlen](https://github.com/JenniferAraujo/42cursus-01-get_next_line/blob/main/get_next_line_utils.c) - calculate array lenght 
* [ft_strchr](https://github.com/JenniferAraujo/42cursus-01-get_next_line/blob/main/get_next_line_utils.c) - finds the first occurrence of a character
* [ft_strjoin](https://github.com/JenniferAraujo/42cursus-01-get_next_line/blob/main/get_next_line_utils.c) - returns a new string, which is the result of concatenating two strings
* [ft_get_line](https://github.com/JenniferAraujo/42cursus-01-get_next_line/blob/main/get_next_line_utils.c) - extracts the line (ending in newline and '\0' in EOF) from static variable. Returns string with full line ending in '\n'
* [ft_new_line](https://github.com/JenniferAraujo/42cursus-01-get_next_line/blob/main/get_next_line_utils.c) - stores in the cumulative static variable the new variable updated with what remains of the original minus the extracted line. Return: The new string updated with what's left of the original static,
minus the extracted row.

## :computer: Compiling the project
The library is written in C language and thus needs the -cc compiler and some standard C libraries to run.

**Instruction**
1. Compiling the library

         $ cc get_next_line.c get_next_line.h get_next_line_utils.c

2. Execute your program

         $ ./a.out
   ![thumbnail_Untitled](https://user-images.githubusercontent.com/106436743/205647806-e7ccdd28-3e29-4b96-8fed-b528a7b3015b.jpg)

## :lady_beetle: Testing 

**Third-party testers used in the project**

* [Tripouille/gnlTester](https://github.com/Tripouille/gnlTester) 

* Mandatory Part
![thumbnail_Screenshot from 2022-12-05 13-14-34](https://user-images.githubusercontent.com/106436743/205647738-e467e455-42e7-47a0-aa93-9ccbee5d1901.jpg)

* Bonus Part
![thumbnail_Screenshot from 2022-12-05 13-14-44](https://user-images.githubusercontent.com/106436743/205647795-1752bad2-7ad1-4f6c-9915-3abe2e18969d.jpg)
