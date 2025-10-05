#include <iostream>
#include <cmath>   // for abs()
using namespace std;

class Date {
private:
    int day, month, year;

    // Helper function to check leap year
    bool isLeap(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    // Helper function to count total number of days till the given date
    long int countDays() const {
        int monthDays[12] = {31, 28, 31, 30, 31, 30,
                             31, 31, 30, 31, 30, 31};

        long int days = year * 365 + day;

        // Add days for months before this month
        for (int i = 0; i < month - 1; i++)
            days += monthDays[i];

        // Add a day for each leap year before this year
        for (int i = 1; i < year; i++)
            if (isLeap(i))
                days += 1;

        // If current year is leap and month > Feb, add one day
        if (month > 2 && isLeap(year))
            days += 1;

        return days;
    }

public:
    // Parameterized constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Member function (not inline) to find days difference
    long int daysdifference(const Date &D2) const;
};

// Definition (outside the class → NOT inline)
long int Date::daysdifference(const Date &D2) const {
    long int days1 = this->countDays();
    long int days2 = D2.countDays();
    return labs(days2 - days1);  // absolute difference
}

int main() {
    Date D1(23, 7, 2003), D2(7, 3, 2010);

    long int days = D1.daysdifference(D2);

    cout << "Difference between the two dates = " << days << " days" << endl;

    return 0;
}
