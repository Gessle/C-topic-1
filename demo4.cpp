#include <iostream>

using namespace std;

void printArray(int* arr[], int size) {
    while (size-- > 0) {
        cout << *arr[size] << " ";
    }
    cout << endl;
}


int main() {
    int* array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = new int(i * 3);
    }

    printArray(array, 10);

    for (int i = 0; i < 10; i++) {
        delete array[i];
    }



    return 0;
}