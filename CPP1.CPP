#include <iostream>
using namespace std;
class NumberPattern {
    int n;   
public:
    NumberPattern(int num) {
        n = num;
    }
    void increasingPattern() {
        cout << "Increasing Pattern:\n";
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }

    // Function to print decreasing right-angled pattern
    void decreasingPattern() {
        cout << "Decreasing Pattern:\n";
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    
    NumberPattern obj(5);
    obj.increasingPattern();
    cout << endl;
    obj.decreasingPattern();
    return 0;
}
