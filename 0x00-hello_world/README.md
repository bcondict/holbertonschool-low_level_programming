# 0x00. C - Hello, World

### Why C programming is awesome

is similar to englis bucause is mid-level language, and it's human friendly. Also helps you to understand the fundamental of computer theories, most of tecnologies are based on c.

### Who invented C

It was created by Dennis M. ritchie at 1970, create as a minimalist language to be used in operating sysyems for computers with a limitted memories. Based on CPL (combined Programming Language). Ritchie rewrite and restored features from CPL and create the UNIX system on c.

### Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds

*Dennis* develop c and beside Ken Thompson working to AT&T Corporation's Bell Laboratories developed the first UNIX version.

*Brian Kernighan* also worked on Bell Labs and contributed to develop UNIX, and was widely known of co-write the first book of C programming Language beside Dennis Ritchie.

*Linus Torvalds* is the inventor of the famous Linux Kernel Operative System, and other OS  such Android. and he created the distributed version control system *git*

### What happens when you type gcc main.c

this command will compile your c file

### What is an entry point

is a point in a program where the execution of a program begins, and where the program has access to command line arguments.

### What is main

main() function is an entry point of the programming code to start its execution. It's a predefined fuction in c. It is a special function that always starts executing code from the 'main' having 'int' or 'void' as return data type.

### How to print text using printf, puts and putchar

- printf= Generally, printf() function is used to print the text along with the values. If you want to print % as a string or text, you will have to use ‘%%’. Neither single % will print anything nor it will show any error or warning. example:

```
int main() {

   printf("Hello%\n");
   return 0;
}
```

*output*

```
Hello%
```

- puts= use puts could be easier or just simplier than prinf, to use it use:
```
int main()
{

    puts("hello");
    
    getchar();
    return 0;
}
```
*output*
```
hello
```

### How to compile using gcc
when you got your .c file, write gcc <filename> and it will become to a executable file with "a" as name.
### What is the default program name when compiling with gcc
gcc assumes that you want to create and executable program called a.exe. to change it type gcc <filename> -o <new_name> to make other file with the new name.

bibliography

https://www.javatpoint.com/what-is-the-main-in-c#:~:text=A%20main%20is%20a%20predefined,void'%20as%20return%20data%20type.

https://www.tutorialspoint.com/how-to-print-using-printf#:~:text=Generally%2C%20printf()%20function%20is,show%20any%20error%20or%20warning.

http://www.delorie.com/djgpp/doc/ug/compiling/gcc.html#:~:text=By%20default%2C%20gcc%20assumes%20that,%2Do%20hello.exe%22.