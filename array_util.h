#ifndef SORTUTILS_H
#define SORTUTILS_H

#include <iostream>

namespace utils {

class SortUtils {
public:
    static void swap(int &a, int &b);
    static void print(int arr[], int size);
    static void selectionSort(int arr[], int n);
    static void print(int arr[]);
};

}

#endif
