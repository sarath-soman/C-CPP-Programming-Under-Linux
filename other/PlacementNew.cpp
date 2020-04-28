//Example demonstrating placement of newly allocated object to a specific location
//Taken from https://praseedp.blogspot.com (Which is a private blog of Praseed Pai)
//Unable to get proper result on CLI - Gibberish output

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char *buffer = (char *)malloc(1000);

    //Placing new string object on buffer
    string *p = new (buffer) string("Hello");
    string *q = new string(", World!");
    *p += *q;

    //Heap allocated, delete will take care of free and destructor call
    delete q;

    printf("%s\n", buffer);

    //Since we manage the sorage, explicitly calling destructor
    p->~string();

    free(buffer);
}