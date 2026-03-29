#include <iostream>

using namespace std;

int main() {
    long long a1 = 789456, d1 = 567890, n1 = 901234;
    long long a2 = 654321, d2 = 876543, n2 = 500001;

    long long j = 0;      // 第二轮当前指针（0下标）
    long long ans = 0;

    for (long long i = 0; i < n1; i++) {
        long long x = a1 + i * d1;   // 第一轮日期

        while (j < n2 && a2 + j * d2 <= x) {
            j++;
        }

        ans += (n2 - j);
    }

    cout << ans << endl;
    return 0;
}