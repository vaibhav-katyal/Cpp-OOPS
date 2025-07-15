#include <iostream>
using namespace std;

int main() {
    int a = 10;         // Copy initialization
    int b(20);          // Direct initialization
    int c{30};          // Uniform initialization
    int d;              // Default initialization (may contain garbage)

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d (default): " << d << endl;

    return 0;
}
