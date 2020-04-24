//
// fupper2.cpp
//
#include <stdio.h>
#include <ctype.h>

int main()
{

 int c;

 while ( ( c = getchar() ) != EOF )
           putchar(toupper(c));

 return 0;

}

//usage
//./fupper < file > outfile