#include <iostream>
using namespace std;

//gets number and operator input from user and calculates solution
void calcIfBlock()
{
    int num1, num2;
    char op;

    //user prompts
    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter operator: " << endl;
    cin >> op;

    cout << "Enter second number: " << endl;
    cin >> num2;

    float result;
    bool error;

    //if block calculates inputted number with inputted operator
    if(op == '+'){
        result = num1 + num2;
        error = false; //gives no error condition
    } else if(op == '-'){
        result = num1 - num2;
        error = false;
    } else if(op == '/'){
        result = num1 / num2;
        error = false;
    } else if(op == '*'){
        result = num1 * num2;
        error = false;
    } else {
        cout << "Invalid operator!" << endl;
        error = true; //gives an error condition
    }

    //gives user solution if no error condition, displays error message otherwise
    if(error == true){ //only valid result will be outputted
        cout << "An error occurred. Accepts only +, -, /, * as operators." << endl;
    } else if(error == false) {
        cout << "The solution is: " << result << endl;
    }
}

//calls calcIfBlock
int main()
{
    calcIfBlock();

    system("pause"); //console won't disappear immediately
    return 0;
}