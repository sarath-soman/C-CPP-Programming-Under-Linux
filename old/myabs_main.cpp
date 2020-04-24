#include <stdio.h>

long my_abs(long a);

int main(int argc, char** argv) {
    printf("Abs value of %ld is %ld\n", -1l, my_abs(-1));
    return 0;
}