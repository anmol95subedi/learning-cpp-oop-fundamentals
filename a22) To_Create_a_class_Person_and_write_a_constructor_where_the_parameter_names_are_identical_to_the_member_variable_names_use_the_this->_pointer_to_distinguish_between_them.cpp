#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void display() const {
        cout << "Name: " << this->name << ", Age: " << this->age << endl;
    }
};

int main() {
    Person p1("Anmol", 21);
    p1.display();

    return 0;
}