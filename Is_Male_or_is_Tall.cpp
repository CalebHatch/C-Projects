#include <iostream>

using namespace std;

void determineMale()
{
     bool isMale = false;
     bool isTall = false;

    if(isMale && isTall){
        cout << "You are a tall male" << endl;
    } else if(isMale && !isTall) {
        cout << "You are a short male" << endl;
    } else if(!isMale && isTall){
        cout << "You are not male, but you are tall" << endl;
    } else {
        cout << "You are neither tall nor male" << endl;
    }
}

int main()
{
    determineMale();

    system("pause");
    return 0;
}