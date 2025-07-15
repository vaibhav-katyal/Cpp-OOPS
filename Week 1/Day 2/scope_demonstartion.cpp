#include <iostream>
using namespace std;

// Global variable
int x = 5;

void showScope() {
    int x = 10;  // Function scope (shadows global x)
    cout << "Inside function: x = " << x << endl;

    {
        int x = 20;  // Block scope (shadows function x)
        cout << "Inside block: x = " << x << endl;
    }

    cout << "Back in function: x = " << x << endl;
}

int main() {
    cout << "In main (global): x = " << x << endl;
    showScope();
    cout << "Back in main (global): x = " << x << endl;
    return 0;
}
