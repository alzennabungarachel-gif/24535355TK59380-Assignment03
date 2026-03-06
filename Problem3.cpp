// Compilation command: g++ -std=c++17 -Wall -Wextra problem3.cpp -o problem3
#include <iostream>

using namespace std;

int linearSearch(int* arr, int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int binarySearch(int* arr, int n, int target) {
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int* generateSortedArray(int n) {
    int* data = new int[n];
    for (int i = 0; i < n; ++i) {
        data[i] = i * 2;
    }
    return data;
}

void testRunner(int n) {
    int* arr = generateSortedArray(n);
    
    int valExists = arr[n / 2];
    int valMissing = -1;

    int targets[] = {valExists, valMissing};
    const char* labels[] = {"Target Exists (", "Target Missing ("};

    for (int i = 0; i < 2; ++i) {
        int t = targets[i];
        int idxL = linearSearch(arr, n, t);
        int idxB = binarySearch(arr, n, t);

        cout << "Size n=" << n << " | " << labels[i] << t << "): Linear=" 
             << idxL << ", Binary=" << idxB << endl;
    }

    delete[] arr;
}

int main() {
    int testCases[] = {10, 100, 1000};
    for (int size : testCases) {
        testRunner(size);
    }
    return 0;
}