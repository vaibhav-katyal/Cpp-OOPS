#include <iostream>
using namespace std;

#define PI_MACRO 3.14     
const float PI_CONST = 3.14;  

int main() {
    cout << "Using macro: " << PI_MACRO << endl;
    cout << "Using const: " << PI_CONST << endl;

    // Difference:
    // Macros don't have type safety or scope.
    // Const variables do.
    
    return 0;
}