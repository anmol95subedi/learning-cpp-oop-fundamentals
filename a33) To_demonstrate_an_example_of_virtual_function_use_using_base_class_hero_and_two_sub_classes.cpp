#include <iostream>
#include <string>
using namespace std;

class Hero {
public: 
    string name;
    string powerName;

    Hero(string n = "Unknown", string p = "No Ability") {
        name = n;
        powerName = p;
    }

    virtual void usePower() {
        cout << name << " uses generic power: " << powerName << endl;
    }
};

class Speedster : public Hero {
public:
    Speedster(string n) : Hero(n, "Run Fast") {}

    void usePower() override { 
        cout << name << " blurts out: I'm fast as lightning! (" << powerName << ")" << endl;
    }
};

class Hulk : public Hero {
public:
    Hulk(string n) : Hero(n, "Super Strength") {}

    void usePower() override {
        cout << name << " screams: SMASH! (" << powerName << ")" << endl;
    }
};

int main() {
    Speedster flash("Barry Allen");
    Hulk greenGuy("Bruce Banner");

    Hero* h1;

    h1 = &flash;
    h1->usePower();

    h1 = &greenGuy;
    h1->usePower();

    return 0;
}