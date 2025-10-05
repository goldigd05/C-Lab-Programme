#include <iostream>
#include <ctime>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) {
        day = d; month = m; year = y;
    }

    void displayAge() {
        time_t t = time(0);
        tm* now = localtime(&t);
        int c_year = now->tm_year + 1900;
        int c_month = now->tm_mon + 1;
        int c_day = now->tm_mday;

        int age = c_year - year;
        if (c_month < month || (c_month == month && c_day < day))
            age--;
        cout << "Age: " << age << " years" << endl;
    }
};

int main() {
    Date D(5, 10, 2003);
    D.displayAge();
    return 0;
}
