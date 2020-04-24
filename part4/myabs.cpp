// myabs.cpp

long myabs( long a ) {
   if ( a < 0 )
      a = -a;
   return a;
}
// eof myabs.cpp

//How to compile
//g++ -c -omyabs.o myabs.cpp
//g++ -omain main.cpp *.o
//./main