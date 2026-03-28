#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<vector<int>> stus(n,vector<int>(m));
    unordered_map<int, int> mp;
    int minAns = 0, maxAns = 0;

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cin >> stus[i][j];
            if (stus[i][j] == 1) {
                mp[i]++;
            }
        }
    }

    // 计算最早被点到
    for (int i = n - 1;i >= x;i--) {
        minAns += mp[i];
        maxAns += mp[i];
    }

    minAns += 1;
    maxAns += mp[x - 1];

    cout << minAns << " " << maxAns;

    return 0;
}