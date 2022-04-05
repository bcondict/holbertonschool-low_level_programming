# File I/O

### How to create, open, close, read and write files
*__ CREATE / OPEN __*

```
FILE *fp;
fp = fopen ("file_name", "mode");
```
the *fopen* is a standard funcion wich is used to open a file
- if the file isn't present on it will  be created and opened
- if the file is already present it will be directly opened
*__ CLOSE __*
```
fclose (fp);
```
the *fclose* function takes a file pointer as an argument. the file associate with the file pointer is then closed withe  help of *fclose* function

### What are file descriptors
the file descriptors are
| file mode | description		|
| --------- | ------------------------- |
|r	| open a file for reading. you wont delete or write anything, just see it|
|w	| open a file for writing. create a file if it doesn's already exist and if it does it you will be able to edit it|
|a	| open a file in append mode. the file is opened and the content within the file won't change|
### What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
A file descriptor is a number that uniquely identifies an open file in a computer's operative system. It describes a data resource, and how that resource may be accessed.
- *0:* standard input (_stdin_) the default data stream for input.
- *1:* standard output (_stdout_) the default data stream for output.
- *2:* standard error (_stderr_) the default data stream for output tha relate to an error occurring.
### How to use the I/O system calls open, close, read and write
### What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
### What are file permissions, and how to set them when creating a file with the open system call
### What is a system call
### What is the difference between a function and a system call
