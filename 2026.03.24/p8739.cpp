#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    string s;
    cin >> k;
    cin >> s;

    int m = s.size();
    if (m % k != 0)
    {
        cout << -1;
        return 0;
    }

    int len = m / k;
    int ans = 0;

    for (int i = 0; i < len; i++)
    {
        int cnt[26] = {0};

        for (int j = 0; j < k; j++)
        {
            cnt[s[j * len + i] - 'a']++;
        }

        int mx = 0;
        for (int c = 0; c < 26; c++)
        {
            mx = max(mx, cnt[c]);
        }

        ans += k - mx;
    }

    cout << ans;

    return 0;
}