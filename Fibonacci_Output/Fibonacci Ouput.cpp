#include <iostream>

using std::cout;
using std::endl;

int main()
{

    int x = 0;
    int y = 1;
    
    cout << x << endl << y << endl;

    int z = x + y;

    while(z < 255){
        cout << z << endl;

        x = y;
        y = z;
        z = x + y;
    }

    system("pause");
    return 0;
}