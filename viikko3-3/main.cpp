#include <iostream>

using namespace std;

class Chef {
public:
    Chef(const string name) : name(name) {
        cout << name << " konstruktori" << endl;
    }
    void makeSalad(){
        cout << name << " makes salad" << endl;
    }
    void makeSoup(){
        cout << name << " makes soup" << endl;
    }
protected:
    string name;
};

class ItalianChef : public Chef {
public:
    ItalianChef(const string name) : Chef(name) {
        cout << name << " konstruktori" << endl;
    }
    string getName() const {
        return name;
    }
    void makePasta() {
        cout << name << " makes pasta" << endl;

    }
};

int main() {
    Chef FirstChef("Chef Jyrki");
    ItalianChef SecondChef("Chef Mario");
    FirstChef.makeSalad();
    SecondChef.makePasta();
    FirstChef.makeSoup();
    cout<<"Chef Mario destruktori"<< endl;
    cout<<"Chef Jyrki destruktori"<< endl;
    return 0;
};
