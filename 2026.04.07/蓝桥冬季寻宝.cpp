#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int left = 1, right = n;
    int ans = 0;

    while (left <= right) {
        int m = (left + right) / 2;
        ans++;  // 每次比较算一次

        if (m < k) {
            left = m + 1;
        } else if (m > k) {
            right = m - 1;
        } else {
            break;
        }
    }

    cout << ans;
    return 0;
}