#include <iostream>
#include <cmath>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) { day = d; month = m; year = y; }
    friend long int daysdifference(Date D1, Date D2);
};

long int daysdifference(Date D1, Date D2) {
    // Simplified calculation
    long int n1 = D1.year * 365 + D1.month * 30 + D1.day;
    long int n2 = D2.year * 365 + D2.month * 30 + D2.day;
    return labs(n2 - n1);
}

int main() {
    Date D1(23,7,2003), D2(7,3,2010);
    cout << "Days Difference: " << daysdifference(D1, D2);
    return 0;
}
