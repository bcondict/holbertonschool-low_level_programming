# File I/O

### How to create, open, close, read and write files
***CREATE / OPEN***

```
FILE *fp;
fp = fopen ("file_name", "mode");
```
the *fopen* is a standard funcion wich is used to open a file
- if the file isn't present on it will  be created and opened
- if the file is already present it will be directly opened

***CLOSE***
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
- *2:* standard error (_stderr_) the default data stream for output tha relate to an error occurring.### How to use the I/O system calls open, close, read and write
### What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
### What are file permissions, and how to set them when creating a file with the open system call
### What is a system call
A syscall is the programmatic way in wich a computer program requests a service from the kernel of the OS on wich it's executed. This may include hardware-related services (accessing a hard disk drive for example). The explanation why is this way is because the normal programs are situated in user mode that don't have the permission of so many thigs that kernel does, that's why a programm ask for services to the kernel.
### What is the difference between a function and a system call


-------------
## bibliograohy 
[C Files I/O: Create, Open, Read, Write and Close a File] (https://www.guru99.com/c-file-input-output.html)
[File descriptor](https://www.computerhope.com/jargon/f/file-descriptor.htm#:~:text=On%20a%20Unix%2Dlike%20operating,and%20STDERR%20(standard%20error).&text=The%20default%20data%20stream%20for,keyboard%20input%20from%20the%20user.) 
[System call](https://en.wikipedia.org/wiki/System_call)
