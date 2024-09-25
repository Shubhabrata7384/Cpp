#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cout << "Enter the number of rows: ";
    cin >> n;
    int totalElements = (n * (n + 1)) / 2;
    num = totalElements;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }

    return 0;
}

