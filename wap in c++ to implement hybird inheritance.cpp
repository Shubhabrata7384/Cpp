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
class Exam {
protected:
    string examName;
    int totalMarks;

public:
    void setExamInfo(string eName, int marks) {
        examName = eName;
        totalMarks = marks;
    }

    void displayExamInfo() {
        cout << "Exam Name: " << examName << endl;
        cout << "Total Marks: " << totalMarks << endl;
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
class Result : public Student, public Exam {
private:
    int marksObtained;

public:
    void setResultInfo(int marks) {
        marksObtained = marks;
    }

    void displayResultInfo() {
        displayStudentInfo();
        displayExamInfo();
        cout << "Marks Obtained: " << marksObtained << endl;
        cout << "Result: " << (marksObtained >= totalMarks * 0.5 ? "Pass" : "Fail") << endl;
    }
};

int main() {
    Result result;
    result.setPersonInfo("Bob", 21);
    result.setStudentInfo("U1234", "Electrical Engineering");
    result.setExamInfo("End-Term Exam", 100);
    result.setResultInfo(72);

    cout << "Student Exam Result Details:" << endl;
    result.displayResultInfo();

    return 0;
}

