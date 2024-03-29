#C - File I/O
File Input/Output and System Calls
##Learning Objectives
By the end of this project, you should be able to:

* Find the right sources of information online
* Create, open, close, read, and write files
* Understand file descriptors and their purpose, including the 3 standard file descriptors and their POSIX names
* Use I/O system calls like `open`, `close`, `read`, and `write`
* Know and use the flags `O_RDONLY`, `O_WRONLY`, and `O_RDWR`
* Understand file permissions and how to set them when creating a file with the open system call
* Understand what a system call is and the difference between a function and a system call
#Project Tasks
##Task 0. Tread lightly, she is near
Write a function that reads a text file and prints it to the POSIX standard output.

###Prototype:

```
ssize_t read_textfile(const char *filename, size_t letters);
```
where `letters` is the number of letters it should read and print. The function should return the actual number of letters it could read and print. If the file cannot be opened or read, return 0. If `filename` is NULL, return 0. If write fails or does not write the expected amount of bytes, return 0.

##Task 1. Under the snow
Create a function that creates a file.

###Prototype:

```
int create_file(const char *filename, char *text_content);
```
where `filename` is the name of the file to create and `text_content` is a NULL terminated string to write to the file. The function should return 1 on success and -1 on failure. The created file must have those permissions: `rw-------`. If the file already exists, do not change the permissions. If the file already exists, truncate it. If `filename` is NULL, return -1. If `text_content` is NULL, create an empty file.

##Task 2. Speak gently, she can hear
Write a function that appends text at the end of a file.

###Prototype:

```
int append_text_to_file(const char *filename, char *text_content);
```
where `filename` is the name of the file and `text_content` is the NULL terminated string to add at the end of the file. The function should return 1 on success and -1 on failure. Do not create the file if it does not exist. If `filename` is NULL, return -1. If `text_content` is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file.

##Task 3. cp
Write a program that copies the content of a file to another file.

Usage: `cp file_from file_to`. If the number of arguments is not the correct one, exit with code 97 and print `Usage: cp file_from file_to`, followed by a new line, on the POSIX standard error. If `file_to` already exists, truncate it. If `file_from` does not exist, or if you cannot read it, exit with code 98 and print `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line, on the POSIX standard error, where `NAME_OF_THE_FILE` is the first argument passed to your program. If you cannot create or if write to `file_to` fails, exit with code 99 and print `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line, on the POSIX standard error, where `NAME_OF





