# 39 Part C/C++ Programming under Linux - blog entries by Praseed Pai ([@praseedpai](https://github.com/praseedpai))

*This repository hosts the C/C++ programs in the 39 part blog entries by Praseed Pai*

### Part 1 - 11 : Summary
-------------------------
The series of entries in the blog posts starts with the *`harisree`* equivalent in programming called `HelloWorld` programs, started out or popularized by K & R in their famous book *The C Programming Language*. (harisree - A southern indian tradition marking a child's entry in to the written world of languagues and there by to the world of knowledge. It is observed primarily in Kerala by Hindus on the day of Vijayadasami, even though there are special rituals for children, people can be seen writing `Om Harisree ganapathaye namaha` on sands present around the temple, in programmer communities a similar activity can be seen, every time they start to learn a new programming language they start with a `helloworld` program)

The author then starts focusing on programs accepting commandline arguments, printing the no of arguments recieved and ends the activity in part3 by spitting all the envs inherited by the C/C++ program. In all these steps the learner will be compiling the programs directly to native executables. In the remaining parts the focus is mainly to teach compiling multi-source programs (programs that spans multiple source files) which includes compiling to object file and creating executable by linking the object files. In addition to this the author is teaching the learner to create a shared library and how to link it statically and dynamically. Finally linux io redirection operators are exposed to the learner and shows how to use C/C++ executables as yet another linux command.

### Part 12 - 19 : Summary
--------------------------
The focus of the entries in this section is on the following
* Starting and interacting with a subprocess using system() and pipe (popen() - file pointer technique)
* File IO using open, read, write, close paradigm.
    * Along with fopen(), fread(), fwrite() and fclose() system call abstractions open(), read(), write() and close() is discussed.

**Note:** Selfmodifying code in part 12 was not compilable in 64 bit arch (took the objdump of 64bit instructions and replaced).
TCP/IP programming section is showing an incorrect program (pointing to previous blog entry program) and hence excluded in summary.

### Series Coverage

- [x] Part 1
- [x] Part 2
- [x] Part 3
- [x] Part 4
- [x] Part 5
- [x] Part 6
- [x] Part 7
- [x] Part 8
- [ ] Part 9
- [x] Part 10
- [x] Part 11
- [ ] Part 12
- [x] Part 13
- [x] Part 14
- [x] Part 15
- [x] Part 16
- [ ] Part 17
- [x] Part 18
- [x] Part 19
- [ ] Part 20
- [ ] Part 21
- [ ] Part 22
- [ ] Part 23
- [ ] Part 24
- [ ] Part 25
- [ ] Part 26
- [ ] Part 27
- [ ] Part 28
- [ ] Part 29
- [ ] Part 30
- [ ] Part 31
- [ ] Part 32
- [ ] Part 33
- [ ] Part 34
- [ ] Part 35
- [ ] Part 36
- [ ] Part 37
- [ ] Part 38
- [ ] Part 39