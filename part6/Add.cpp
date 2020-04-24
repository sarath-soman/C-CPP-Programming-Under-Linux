// Add.cpp
#include <stdio.h>

extern "C" int Add( int x , int y ) {
  return x + y;
}

// Eof Add.cpp

//compile ==> g++ -fPIC -shared -o libAdd.so Add.cpp