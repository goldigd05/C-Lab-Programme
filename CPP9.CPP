#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() { feet = 0; inches = 0; }
    Distance(int f, int i) { feet = f; inches = i; }

    void setDistance(int f, int i) {
        feet = f;
        inches = i;
    }

    Distance add(Distance d2) const {
        Distance temp;
        temp.inches = inches + d2.inches;
        temp.feet = feet + d2.feet + temp.inches / 12;
        temp.inches %= 12;
        return temp;
    }

    void showDistance() const {
        cout << feet << "'" << inches << "''" << endl;
    }
};

int main() {
    Distance D1(5, 9), D2(3, 5);
    Distance D3 = D1.add(D2);
    D3.showDistance();
    return 0;
}
