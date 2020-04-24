#include <stdio.h>

extern "C" int Add(int x, int y);

int main(int argc, char** argv) {
    int result = Add(3,4);
    printf("3 + 4 = %d\n", result);
    return 0;
}