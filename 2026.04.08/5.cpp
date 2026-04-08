#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int b = 0; // 当前已经消耗了的体力
    vector<pair<int, int>> nums;
    for(int i = 0;i < n;i++){
        int ai, bi;
        cin >> ai >> bi;
        nums.push_back({ai, bi});
    }

    // cout << nums[0].first;
    // 请在此输入您的代码
    sort(nums.begin(), nums.end());

    for (const auto it : nums) {
        if (b <= it.second) {
            b += it.first;
            ans++;
        }
    }

    cout << ans;
    return 0;
}