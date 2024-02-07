#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int A[n];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }
    //for i=2 to a.length
    for (int i = 1; i < n; ++i) {
        int key = A[i];//key=a[i];
        int j = i - 1;//j=i-1;
        while (j >= 0 && A[j] > key) {//condition
            A[j + 1] = A[j];
            --j;
        }
        A[j + 1] = key;
    }

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
