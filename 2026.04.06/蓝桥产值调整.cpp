#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 请在此输入您的代码
    int t;
    cin >> t;
    vector<vector<long long>> ans(t);
    for(int i = 0;i < t;i++){
        long long a, b, c, k;
        cin >> a >> b >> c >> k;
        for(int j = 0;j < k;j++){
            long long tmpa = (b + c) / 2;
            long long tmpb = (a + c) / 2;
            long long tmpc = (a + b) / 2;
            a = tmpa;
            b = tmpb;
            c = tmpc;
        }

        ans[i] = {a, b, c};
    }

    for(int i = 0;i < t;i++){
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << "\n";
    }

    return 0;
}