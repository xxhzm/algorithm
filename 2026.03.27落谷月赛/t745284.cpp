#include <iostream>

using namespace std;

// 4 4
// 1 2
// 0
// 1 2
// 2 1 3
// 3 1 3 2 87 51 92
// 1 2 79
// 2 1 3 48 97
// 1 4 80

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> pre(n + 1);

    for (int i = 1;i <= n;i++) {
        int k;
        cin >> k;
        pre[i].resize(k);
        for (int j = 0;j < k;j++) {
            cin >> pre[i][k];
        }
    }

    vector<int> state(n = 1,0);
    while (m--) {
        int t;
        cin >> t;

        vector<int> x(t), s(t);
        for (int i = 0; i < t; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < t; i++) {
            cin >> s[i];
        }

        bool ok = true;

        for (int i = 0; i < t && ok; i++) {
            int course = x[i];

            // 课程必须是 未选 或 挂科
            if (state[course] == 1) {
                ok = false;
                break;
            }

            // 所有先修课都必须已经通过
            for (int p : pre[course]) {
                if (state[p] != 1) {
                    ok = false;
                    break;
                }
            }
        }

        if (!ok) {
            cout << "Error\n";
            continue;
        }

        // 合法则更新状态，并输出结果
        string ans;
        for (int i = 0; i < t; i++) {
            int course = x[i];
            if (s[i] >= 60) {
                state[course] = 1;
                ans += 'P';
            } else {
                state[course] = 2;
                ans += 'F';
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}