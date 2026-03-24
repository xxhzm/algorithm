#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<long long> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    long long ans = 0, tmp = 0;
    int l = 0;
    int r;
    for (r = 0; r < m; r++)
    {
        ans += nums[r];
    }

    tmp = ans;
    while (r < n)
    {
        tmp -= nums[l];
        tmp += nums[r];
        ans = min(ans, tmp);
        l++;
        r++;
    }

    cout << ans;

    return 0;
}