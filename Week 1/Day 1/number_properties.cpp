#include<iostream>
using namespace std;

class NumberProperties {
public:
    int num;

    void isEven(int num) {
        if(num % 2 == 0) {
            cout << num << " is Even" << endl;
        } else {
            cout << num << " is Odd" << endl;
        }
    }

    void isPositive(int num) {
        if(num > 0) {
            cout << num << " is Positive" << endl;
        } else if(num < 0) {
            cout << num << " is Negative" << endl;
        } else {
            cout << num << " is Zero" << endl;
        }
    }

    int no_of_digits(int num){
        int cnt = 0;
        if(num == 0) return 1;
        while(num != 0){
            cnt++;
            num = num / 10;
        }
        return cnt;
    }


};

int main(){
    NumberProperties np;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    np.isEven(num);
    np.isPositive(num);
    if(np.no_of_digits(num) == 1){
        cout << "Single Digit" << endl;
    }
    else if(np.no_of_digits(num) == 2){
        cout << "Double Digit" << endl;
    }
    else{
        cout << "More than Two Digits" << endl;
    }
    
    return 0;
}