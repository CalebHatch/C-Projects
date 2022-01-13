#include <iostream>
using namespace std;

int main(){
    double celsiusTemp;
    cout << "This program converts a temperature in degrees Celsius into a temperature in degrees Fahrenheit. Enter a temperature in degrees Celsius: " << endl;
    cin >> celsiusTemp;

    double fahrenheitTemp;
    fahrenheitTemp = (celsiusTemp * 1.8) + 32;

    cout << celsiusTemp << " degrees Celsius is equal to " << fahrenheitTemp << " degrees Fahrenheit. Goodbye." << endl;

    system("pause");
    return 0;
}
