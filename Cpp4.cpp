#include <iostream>
#include <algorithm>
using namespace std;
class Statistics {
private:
    int arr[100];
    int n;

public:
    void getdata() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter elements: ";
        for (int i = 0; i < n; i++) cin >> arr[i];
    }

    double mean() {
        double sum = 0;
        for (int i = 0; i < n; i++) sum += arr[i];
        return sum / n;
    }

    double median() {
        sort(arr, arr + n);
        if (n % 2 == 0)
            return (arr[n/2 - 1] + arr[n/2]) / 2;
        else
            return arr[n/2];
    }

    int mode() {
        int maxCount = 0, modeVal = arr[0];
        for (int i = 0; i < n; ++i) {
            int count = 0;
            for (int j = 0; j < n; ++j)
                if (arr[j] == arr[i]) count++;
            if (count > maxCount) {
                maxCount = count;
                modeVal = arr[i];
            }
        }
        return modeVal;
    }

    void display() {
        cout << "Mean: " << mean() << endl;
        cout << "Median: " << median() << endl;
        cout << "Mode: " << mode() << endl;
    }
};

int main() {
    Statistics S;
    S.getdata();
    S.display();
    return 0;
}
