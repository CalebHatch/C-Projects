//gets number and operator input from user and calculates solution
void calcIfBlocks()
{
    int num1, num2;
    char op;

    //user prompts
    cout << "Enter first number: " << endl;
    std::cin >> num1;

    cout << "Enter operator: " << endl;
    std::cin >> op;

    float result;
    bool error;

    if(op == '+'){
        cout << "Enter second number: " << endl;
        std::cin >> num2;
        error = false; //gives no error condition
    } else if(op == '-'){
        cout << "Enter second number: " << endl;
        std::cin >> num2;
        error = false;
    } else if(op == '/'){
        cout << "Enter second number: " << endl;
        std::cin >> num2;
        error = false;
    } else if(op == '*'){
        cout << "Enter second number: " << endl;
        std::cin >> num2;
        error = false;
    } else {
        cout << "Invalid operator!" << endl;
        error = true; //gives an error condition
    }

    //if block calculates inputted number with inputted operator
    if(error == false){
        if(op == '+'){
            result = num1 + num2;
        } else if(op == '-'){
            result = num1 - num2;
        } else if(op == '/'){
            result = num1 / num2;
        } else if(op == '*'){
            result = num1 * num2;
        }
    }

    //gives user solution if no error condition, displays error message otherwise
    if(error == true){ //only valid result will be outputted
        cout << "An error occurred. Accepts only +, -, /, * as operators."
        << endl;
    } else if(error == false) {
        cout << "The solution is: " << result << endl;
    }
}