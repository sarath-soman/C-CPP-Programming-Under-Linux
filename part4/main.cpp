//main.cpp
//
#include <stdio.h>

long myabs(long a );   // implementation in myabs.cpp

int main( int argc , char **argv )
{
  printf("The absolute value of %d is %d\n",-1,myabs(-1));
}

// EOF main.cpp