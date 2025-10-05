#include <iostream>
using namespace std;

class Cake {
private:
    static int prepared;
    static int sold;

public:
    Cake() { prepared++; }

    void sell() {
        if (prepared - sold > 0)
            sold++;
        else
            cout << "No stock left!\n";
    }

    static void showStatus() {
        cout << "Cakes prepared: " << prepared << endl;
        cout << "Cakes sold: " << sold << endl;
        cout << "Current stock: " << prepared - sold << endl;
    }
};

int Cake::prepared = 0;
int Cake::sold = 0;

int main() {
    Cake c1, c2, c3;
    c1.sell();
    Cake::showStatus();
    return 0;
}
