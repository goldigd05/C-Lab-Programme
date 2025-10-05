#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() { cout << "Teaching students\n"; }
};

class Researcher {
public:
    void research() { cout << "Conducting research\n"; }
};

class Professor : public Teacher, public Researcher {
public:
    void work() { cout << "Professor teaches and researches\n"; }
};

int main() {
    Professor p;
    p.teach();
    p.research();
    p.work();
    return 0;
}
