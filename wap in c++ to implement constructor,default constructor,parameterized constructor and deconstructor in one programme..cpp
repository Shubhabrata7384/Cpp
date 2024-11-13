#include <iostream>
using namespace std;

class Sample {
private:
    int value;

public:
    // Default constructor
    Sample() {
        value = 0;
        cout << "Default constructor called. Value initialized to " << value << endl;
    }

    // Parameterized constructor
    Sample(int v) {
        value = v;
        cout << "Parameterized constructor called. Value initialized to " << value << endl;
    }

    // Constructor with default argument
    Sample(int v, bool addTen = false) {
        if (addTen) {
            value = v + 10;
            cout << "Constructor with default argument called. Value initialized to " << value << " (with 10 added)" << endl;
        } else {
            value = v;
            cout << "Constructor with default argument called. Value initialized to " << value << endl;
        }
    }

    // Destructor
    ~Sample() {
        cout << "Destructor called. Value was " << value << endl;
    }

    // Function to display value
    void display() {
        cout << "Current value is: " << value << endl;
    }
};

int main() {
    cout << "Creating obj1 with default constructor:" << endl;
    Sample obj1;
    obj1.display();

    cout << "\nCreating obj2 with parameterized constructor:" << endl;
    Sample obj2();
    obj2.display();

    cout << "\nCreating obj3 with constructor with default argument (no extra 10):" << endl;
    Sample obj3(30);
    obj3.display();

    cout << "\nCreating obj4 with constructor with default argument (with extra 10):" << endl;
    Sample obj4(30, true);
    obj4.display();

    return 0;
}

