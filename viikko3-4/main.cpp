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
    ItalianChef(const string name, int vesi, int jauhot) : Chef(name), vesi(vesi), jauhot(jauhot) {
        cout << name << " konstruktori" << endl;
    }
    string getName() const {
        return name;
    }
    void makePasta() {
        cout << name << " makes pasta with special recipe" << endl;
        cout << name << " users jauhot = " << jauhot << endl;
        cout << name << " users vesi = " << vesi << endl;
    }
private:
    int vesi;
    int jauhot;
};
int main() {
    ItalianChef SecondChef("Chef Mario",100,250);
    SecondChef.makePasta();
    cout<<"Chef Mario destruktori"<< endl;
    return 0;
};
