#include <iostream>
using namespace std;

int power(int base, int exponent){
    int result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    return result;
}

int main()
{
    int base;
    int exponent;

    cout << "Enter your base number: " << endl;
    cin >> base;

    cout << "Enter your exponent: " << endl;
    cin >> exponent;

    cout << power(base, exponent) << endl;

    system("pause");
    return 0;
}