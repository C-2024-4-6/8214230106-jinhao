#include <iostream>
using namespace std;
void sort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int size;
    cout << "请输入元素个数: ";
    cin >> size;
    int* Array = new int[size];
    cout << "请输入数组元素: ";
    for (int i = 0; i < size; i++) {
        cin >> Array[i];
    }
    sort(Array, size);
    cout << "排序后的数组为: ";
    int* point = Array; 
    for (int i = 0; i < size; i++) {
        cout << *point << " "; 
        point++; 
    }
    cout << endl;
    delete[] Array;
    return 0;
}