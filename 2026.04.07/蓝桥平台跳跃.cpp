#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 请在此输入您的代码
    long long n;
    cin >> n;
    vector<long long> h(n);
    for(int i = 0;i < n;i++){
        cin >> h[i];
    }

    vector<long long> dp(n, 1e18);

    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for(int i = 2;i < n;i++){
        dp[i] = min(
              dp[i - 1] + abs(h[i] - h[i - 1]),
              dp[i - 2] + 3LL * abs(h[i] - h[i - 2])
          );
    }

    cout << dp[n - 1];
    return 0;
}