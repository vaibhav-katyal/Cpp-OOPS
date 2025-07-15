#include<iostream>
using namespace std;

class SICalculator {
public:
    double principal, rate, time;

    double calcSI(double principal, double rate, double time) {
        return (principal * rate * time) / 100.0;
    }
};

int main(){
    SICalculator s;
    double principal, rate, time;
    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;
    double simpleInterest = s.calcSI(principal, rate, time);
    cout << "Simple Interest: " << simpleInterest << endl;
    return 0;
}