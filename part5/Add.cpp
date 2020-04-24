//
// Add.cpp

#include <stdio.h>

extern "C" int Add( int x , int y ) {
  return x + y;
}

//-fPIC ==> position independent code
//-shared flag to create shared library

//compile ==> g++ -fPIC -shared -o libAdd.so Add.cpp
//compile ==> g++ -o main main.cpp ./libAdd.so