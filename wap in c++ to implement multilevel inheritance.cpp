#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    void setPersonInfo(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
protected:
    string studentID;
    string course;

public:
    void setStudentInfo(string id, string c) {
        studentID = id;
        course = c;
    }

    void displayStudentInfo() {
        displayPersonInfo();
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};
class RegisteredStudent : public Student {
private:
    string registrationNumber;
    string semester;

public:
    void setRegistrationInfo(string regNum, string sem) {
        registrationNumber = regNum;
        semester = sem;
    }

    void displayRegistrationInfo() {
        displayStudentInfo();
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    RegisteredStudent regStudent;
    regStudent.setPersonInfo("Shubhabrata", 20);
    regStudent.setStudentInfo("S1234", "Computer Science");
    regStudent.setRegistrationInfo("AU/2023/0009940", "3rd Semester");

    cout << "Registered Student Details:" << endl;
    regStudent.displayRegistrationInfo();

    return 0;
}

