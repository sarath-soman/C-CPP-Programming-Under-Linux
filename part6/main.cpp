// main.cpp
#include <stdio.h>
#include <dlfcn.h> // necessary for dynamic loading of shared libraries

typedef int (*BinaryFunction)(int x, int y);

int main()
{

    void *lib = dlopen("./libAdd.so", RTLD_LAZY);

    if (lib == 0)
    {
        printf("Failed to load the shared library \n");
        return -1;
    }

    BinaryFunction bf = (BinaryFunction)dlsym(lib, "Add");

    if (bf == 0)
    {
        printf("Failed to retrieve function pointer \n");
        return -1;
    }

    // int r = (*bf)(3,4);
    int r = DL_CALL_FCT(bf, (3, 4));
    dlclose(lib);

    printf("%d\n", r);

    return 0;
}

// Eof main.cpp

//compile ==> g++ -o main.exe main.cpp -ldl
//flag ==> -ldl links dynamic library