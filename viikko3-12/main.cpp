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

int main() {
    Chef FirstChef("Chef Gordon Ramsay");
    FirstChef.makeSalad();
    FirstChef.makeSoup();

    Chef SecondChef("Chef Anthony Bourdain");
    SecondChef.makeSalad();
    SecondChef.makeSoup();
    cout<<"Chef Anthony Bourdain destruktori"<< endl;
    cout<<"Chef Gordon Ramsay destruktori"<< endl;
    return 0;
};
