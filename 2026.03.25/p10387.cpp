#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;

    vector<pair<long long, long long>> a(n); // {c[i], p[i]}
    long long sumP = 0;

    for (int i = 0; i < n; i++) {
        long long p, c;
        cin >> p >> c;
        a[i] = {c, p};
        sumP += p;
    }

    sort(a.begin(), a.end());

    long long ans = 0;
    long long last = 0;
    int i = 0;

    while (i < n) {
        long long curC = a[i].first;

        ans += (curC - last) * min(s, sumP);

        while (i < n && a[i].first == curC) {
            sumP -= a[i].second;
            i++;
        }

        last = curC;
    }

    cout << ans << '\n';
    return 0;
}