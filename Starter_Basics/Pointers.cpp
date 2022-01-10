#include <iostream>

int main()
{
    int age = 19;
    int *pAge = &age;

    double GPA = 2.7;
    double *pGPA = &GPA;

    std::string name = "Mike";
    std::string *pName = &name;

    std::cout << *&age << std::endl;

    /*
    cout << "Age: " << &age << endl;
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;
    */

    system("pause");
    return 0;
}