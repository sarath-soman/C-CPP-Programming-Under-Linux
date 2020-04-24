#include <stdio.h>

int main(int argc, char** argv, char** envp) {
    char** temp = envp;

    while(*(temp + 1) != 0) {
        puts(*temp);
        temp++;
    }
}