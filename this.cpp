#include <iostream>
using namespace std;

class student{
public:
    // Parameterized constructor
    student(string name, string dept, int id, int age){
        this->name = name;
        this->dept = dept;
        this->id = id;
        this->age = age;
    }

    string name;
    string dept;
    int id;
    int age;
};

int main() 
{
    student s1("John Doe", "CS", 123, 20); 

   
    cout << "Name: " << s1.name << endl;
    cout << "Department: " << s1.dept << endl;
    cout << "ID: " << s1.id << endl;
    cout << "Age: " << s1.age << endl;

    return 0;
}
