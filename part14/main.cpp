// syscall.cpp
//
//
// g++ -o test.exe syscall.cpp
//
// ./test.exe
//

#include <stdio.h>
#include <stdlib.h>

int main( int argc , char **argv )
{
     int rc =  system("ls -l");
     return rc;
}

// eof syscall.cpp