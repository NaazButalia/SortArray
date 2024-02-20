#include <iostream>
#include <algorithm> 
#include <vector>    

int main() {
    int arr[] = {5, 2, 9, 1, 7};

    int size = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr, arr + size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

