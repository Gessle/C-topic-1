#include <iostream>

using namespace std;

int sum(int x, int y) {
    return x + y;
}

void changeValue(int x) {
    x *= 10;
    cout << "Inside changeValue (copy) function, X: " << x << endl;
}

void changeValue(int *x) {
    *x *= 10;
    cout << "Inside changeValue (pointer) function, X: " << *x << endl;
}

void changeValueRef(int &x) {
    x *= 10;
    cout << "Inside changeValue (reference) function, X: " << x << endl;
}

void printArray(int arr[], int size) {
    while (size-- > 0) {
        cout << arr[size] << " ";
    }
    cout << endl;
}

int main() {
    int a = 5;
    int b = 10;
    int x = 15;

    cout << "The sum of a and b is: " << sum(a, b) << endl;

    cout << "X: " << x << endl;
    changeValue(x);
    cout << "X: " << x << endl;
    changeValue(&x);
    cout << "X: " << x << endl;
    changeValueRef(x);
    cout << "X: " << x << endl;

    int array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }

    printArray(array, 10);

    return 0;
}