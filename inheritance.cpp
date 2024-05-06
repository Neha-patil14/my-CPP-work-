#include <iostream>
using namespace std;

// Base class
class Father {
public:
    string property;

    void displayProperty() {
        cout << "Father's property: " << property << endl;
    }
};

// Derived class
class Son : public Father {
public:
    string additionalProperty;

    void displayAdditionalProperty() {
        cout << "Son's additional property: " << additionalProperty << endl;
    }
};

int main() {
    // Creating an object of Son class
    Son son;

    // Accessing and using properties from Father class
    son.property = "House";
    son.displayProperty();

    // Using additional properties from Son class
    son.additionalProperty = "Car";
    son.displayAdditionalProperty();

    return 0;
}
