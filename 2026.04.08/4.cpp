#include <iostream>
using namespace std;

int main() {
    int m, a;
    cin >> m >> a;

    int f1 = 1 % m, f2 = 1 % m;

    if (f1 == a) {
        cout << 1;
        return 0;
    }
    if (f2 == a) {
        cout << 2;
        return 0;
    }

    for (int i = 3; i <= 6 * m + 5; i++) {
        int f3 = (f1 + f2) % m;
        if (f3 == a) {
            cout << i;
            return 0;
        }
        f1 = f2;
        f2 = f3;

        if (f1 == 1 % m && f2 == 1 % m) break;
    }

    cout << -1;
    return 0;
}