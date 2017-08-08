#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int rc = system("ls -l");
    return rc;
}