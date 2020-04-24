#include <stdio.h>

int main(int argc, char** argv) {

    if(argc == 1) {
        //c/c++ programs will have atleast one argument passed to the main method
        //(which will be the file name)

        printf("No command line argument\n");
        return 0;
    }

    printf("File name: %s\n", argv[0]);

    for(int i = 1; i < argc; i++) {
        puts(argv[i]);
    }

}