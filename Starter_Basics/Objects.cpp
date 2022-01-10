#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Student {
    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};

int main()
{
    Student student1("Jim", "Business", 2.4);

    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;

    system("pause");
    return 0;
}
