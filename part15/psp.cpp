// psp.cpp
//
// g++ -o psp.exe psp.cpp
// ./psp.exe
//

#include <stdio.h>
#include <unistd.h>

int main( int argc , char **argv )
{
  FILE *fp = 0;

  //---------- open a pipe for writing
  if ( ( fp = popen("sort","w")) == 0 )
           return -1;

  //------------ write to the pipe
  fprintf(fp,"Java\n");
  fprintf(fp,"Scala\n");
  fprintf(fp,"C\n");
  fprintf(fp,"C++\n");
  fprintf(fp,"Haskell\n");
  fprintf(fp,"Typescript\n");

  pclose(fp);  // when you close the pipe sorting will happen..

  return 0;

}

// EOF psp.cpp

