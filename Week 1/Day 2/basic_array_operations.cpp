#include <iostream>
using namespace std;

int main() {

    // Declare and initialize arrays
    int numbers[5] = {10, 20, 30, 40, 50};    
    float decimals[] = {1.5, 2.5, 3.5};       
    char letters[4] = {'A', 'B', 'C', 'D'};   

    // Modify array element
    numbers[2] = 100; 

    // Print and calculate sum and average of int array
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    float average = sum / 5.0;
    cout << "Sum : " << sum << endl;
    cout << "Average : " << average << endl;

    return 0;
}
