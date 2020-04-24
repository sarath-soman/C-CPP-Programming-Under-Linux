//
// mn.cpp
//
//
#include <stdio.h>

// ------------- The Add function will be packaged in
// a shared library (.so )

extern "C" int Add( int x , int y );

int main()
{
  int r = Add(3,4);
  printf("%d\n",r);
  return 0;
}




//Shared library aka DLL