#include "array_util.h";

namespace utils {
    void array_util::swaparr(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void array_util::print(int arr[], int size) {
        for(int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    void array_util::selectionSort(int arr[], int n) {
        for(int i = 0; i < n - 1; i++) {
            int smallestIdx = i;
            for(int j = i + 1; j < n; j++) {
                if(arr[j] < arr[smallestIdx])
                    smallestIdx = j;
            }
            swap(arr[i], arr[smallestIdx]);
        }
    }
}