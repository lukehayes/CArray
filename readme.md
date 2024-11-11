# C Array

A tiny string library to help working with strings in C.

### Building

You can just take `array.h` and `array.c` and add them to your own projects then build them with a makefile
or CMake etc.

Alternatively:

    * clone the project
    * cd in to project
    * mkdir build
    * cd build
    * cmake ..
    * use the binary that has been built


### Usage

Read a file into a string:

```
Array* s1 = StrCreate("Hello World");
StrDestroy(s1);
```

Get the size of the string:

```
Array* s1 = StrCreate("Hello World");
size_t size = s1.size;
```

Get the size of the string:

```
Array* s1 = StrRev("Hello World");  // s1 is now dlroW olleH
```

Print a string to stdout

```
Array* s1 = StrRev("Hello World");  // s1 is now dlroW olleH
StrPrint(s1);
```
