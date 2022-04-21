#include<iostream>
#include<stdlib.h>

template<class T>
void sort(int length, T *arr) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                char temp[sizeof(T)];
                std::memcpy(temp, arr + j, sizeof(T));
                std::memcpy(arr + j, arr + i, sizeof(T));
                std::memcpy(arr + i, temp, sizeof(T));
            }
        }
    }
}

template<class T>
void g_sort(int length, T *arr, int (*comp)(const T*, const T*)) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (comp(arr + i, arr + j) > 0) {
                char temp[sizeof(T)];
                std::memcpy(temp, arr + j, sizeof(T));
                std::memcpy(arr + j, arr + i, sizeof(T));
                std::memcpy(arr + i, temp, sizeof(T));
            }
        }
    }
}

template<class T>
int g_comparator(const T* x, const T* y) {
    return *x - *y;
}

int comparator(const void* x, const void* y) {
    return *((int*)x) - *((int*)y);
}

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cout << "No CommandLine argument" << std::endl;
        return 0;
    }

    std::cout << "Numbers" <<std::endl;
    int *nums = new int[argc - 1];
    for(int i = 1; i < argc; i++) {
        nums[i - 1] = atoi(argv[i]);
        std::cout << nums[i - 1] <<std::endl;
    }

    // sort(argc-1, nums);
    // std::qsort(nums, argc - 1, sizeof(int), comparator);
    g_sort(argc-1, nums, g_comparator);

    std::cout << "" << std::endl;
    std::cout << "Sorted numbers" <<std::endl;
    for(int i = 0; i < argc - 1; i++) {
        std::cout << nums[i] << std::endl;
    }

    delete[] nums;
}