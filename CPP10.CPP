#include <iostream>
using namespace std;

class Student {
private:
    const int rollno;
    string name;
    int marks[3];

public:
    Student(int r) : rollno(r) {}

    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }

    void display() {
        int total = 0;
        for (int i = 0; i < 3; i++)
            total += marks[i];
        float avg = total / 3.0;
        cout << "Roll No: " << rollno << "\nName: " << name
             << "\nTotal: " << total << "\nAverage: " << avg << endl;
    }
};

int main() {
    Student S(101);
    S.getdata();
    S.display();
    return 0;
}
