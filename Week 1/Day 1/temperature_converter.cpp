#include <iostream>
using namespace std;

class temperatureConverter
{
public:
    double c, f, k;
    double celsiusToFahrenheit(double c)
    {
        return (c * 9.0 / 5.0) + 32;
    }

    double celsiusToKelvin(double c)
    {
        return c + 273.15;
    }

    double fahrenheitToCelsius(double f)
    {
        return (f - 32) * 5.0 / 9.0;
    }

    double fahrenheitToKelvin(double f)
    {
        return (f - 32) * 5.0 / 9.0 + 273.15;
    }

    double kelvinToCelsius(double k)
    {
        return k - 273.15;
    }

    double kelvinToFahrenheit(double k)
    {
        return (k - 273.15) * 9.0 / 5.0 + 32;
    }
};

int main(){
    temperatureConverter tc;
    int choice;
    double value;
    cout << "Temperature Converter Menu:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl; 
    cout << "2. Celsius to Kelvin" << endl;
    cout << "3. Fahrenheit to Celsius" << endl;
    cout << "4. Fahrenheit to Kelvin" << endl;
    cout << "5. Kelvin to Celsius" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;
    cout << "Enter the temperature value: ";
    cin >> value;
    switch(choice){
        case 1:
            cout << value << " deg C = " << tc.celsiusToFahrenheit(value) << " deg F" << endl;
            break;
        case 2:
            cout << value << " deg C = " << tc.celsiusToKelvin(value) << " K" << endl;
            break;      
        case 3:
            cout << value << " degrees Fahrenheit = " << tc.fahrenheitToCelsius(value) << " deg C" << endl;
            break;
        case 4:
            cout << value << " deg F = " << tc.fahrenheitToKelvin(value) << " K" << endl;
            break;  
        case 5:
            cout << value << " K = " << tc.kelvinToCelsius(value) << " deg C" << endl;
            break;  
        case 6:
            cout << value << " K = " << tc.kelvinToFahrenheit(value) << " deg F" << endl;
            break;      
        default:
            cout << "Invalid choice! Please select a valid option." << endl;    
            break;
    }
    return 0;
}