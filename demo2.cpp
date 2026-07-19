#include <iostream>

using namespace std;

typedef unsigned short USHORT;
const float PI = 3.14159265358979323846f;


int main() {
    char c = 'C';
    short s = 100;
    int i = 65536;
    long l = 1000000;
    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238462643383279502884L;
    bool b = false;
    wchar_t wc = L'W';

    cout << "char: " << c << " (" << sizeof(c) << " bytes)" << endl;
    cout << "short: " << s << " (" << sizeof(s) << " bytes)" << endl;
    cout << "int: " << i << " (" << sizeof(i) << " bytes)" << endl;
    cout << "long: " << l << " (" << sizeof(l) << " bytes)" << endl;
    cout << "float: " << f << " (" << sizeof(f) << " bytes)" << endl;
    cout << "double: " << d << " (" << sizeof(d) << " bytes)" << endl;
    cout << "long double: " << ld << " (" << sizeof(ld) << " bytes)" << endl;
    cout << "bool: " << b << " (" << sizeof(b) << " bytes)" << endl;
    cout << "wchar_t: " << wc << " (" << sizeof(wc) << " bytes)" << endl;

    // ****
    USHORT us = 65535;
    short myShort = -32768;

    cout << us << "\t" << myShort << endl;
    us++;
    myShort--;
    cout << us << "\t" << myShort << endl;
    us++;
    myShort--;
    cout << us << "\t" << myShort << endl;

    // ****
    auto r = 5;
    cout << "PI: " << PI << " (" << sizeof(PI) << " bytes)" << endl;
    cout << "Size of a circle: " << PI * r * r << endl;


    enum GRADES {Fail, Passable, Satisfactory, Good, VeryGood, Excellent};
    int grade;
    cout << "Enter your grade (0-5): ";
    cin >> grade;
    if (grade == VeryGood || grade == Excellent) {
        cout << "That's awesome!" << endl;
    } else if (grade == Fail) {
        cout << "That's sad" << endl;
    } else {
        cout << "Nice!" << endl;
    }    

    // ****
    int ii;
    int* p;

    cout << ii << endl;
    cout << p << endl;
    //cout << *p << endl; produces an error because p is uninitialized and dereferencing it is undefined behavior

    ii = 10;
    int& ref = ii;

    cout << ii << endl;
    cout << p << endl;
    //cout << *p << endl;
    cout << ref << endl;

    p = &ii;

    cout << ii << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << ref << endl;


    return 0;
}