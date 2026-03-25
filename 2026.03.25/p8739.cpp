#include <iostream>

using namespace std;

int main() {
    int k;
    string s;
    cin >> k >> s;

    const int size = s.size();

    if (size % k != 0) {
        return -1;
    }

    const int len = size / k;
    int ans = 0;

    // 按照k来进行切割
    for (int i = 0; i < len; i++){
        int cnt[26] = {0};

        for (int j = 0; j < k; j++)
        {
            cout << j * len + i;
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