#include <stdio.h>
#include <dlfcn.h>

typedef int (*BinaryFunction)(int,int);

int main() {
    void * lib = dlopen("./libAdd.so", RTLD_LAZY);
    if(lib == 0) {
        printf("Failed to load the shared library\n");
        return -1;
    }

    BinaryFunction bf = (BinaryFunction)dlsym(lib, "Add");

    if(bf == 0) {
        printf("Failed to get function pointer\n");
        return -1;
    }

    int result = (*bf)(10, 20);
    dlclose(lib);

    printf("10 + 20 = %d\n", result);
    return 0;
}