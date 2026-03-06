#include <iostream>
#include <iomanip>

using namespace std;

struct DynArray {
    int* data;
    int size;
    int capacity;

    DynArray() {
        capacity = 2;
        size = 0;
        data = new int[capacity];
    }

    ~DynArray() {
        delete[] data;
    }

    void resize() {
        capacity *= 2;
        int* newData = new int[capacity];
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

    void pushBack(int value) {
        if (size == capacity) resize();
        data[size++] = value;
    }

    void insertAt(int index, int value) {
        if (size == capacity) resize();
        for (int i = size; i > index; i--) {
            data[i] = data[i - 1];
        }
        data[index] = value;
        size++;
    }

    void removeAt(int index) {
        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size--;
    }

    int getAt(int index) const {
        return data[index];
    }

    void setAt(int index, int value) {
        data[index] = value;
    }

    void print() const {
        cout << "[";
        for (int i = 0; i < size; i++) {
            cout << data[i] << (i < size - 1 ? ", " : "");
        }
        cout << "] (size=" << size << ", cap=" << capacity << ")" << endl;
    }
};

int main() {
    DynArray arr;

    for (int i = 1; i <= 5; i++) {
        arr.pushBack(i * 10);
    }
    arr.print(); 

    arr.insertAt(2, 25);
    arr.print(); 

    arr.removeAt(0);
    arr.print();

    cout << "Element at index 2: " << arr.getAt(2) << "\n"; 
    arr.setAt(2, 99);
    arr.print(); 

    return 0;
}