#include <iostream>

using namespace std;

//3
//1 2 2 3 1 3
int main(){
    int n;
    cin >> n;
    vector<int> nums(2*n);
    unordered_map<int, vector<int>> mp;
    for(int i = 0;i < 2 * n;i++){
        cin >> nums[i];
        mp[nums[i]].push_back(i);
    }

    for (int i = 0;i < 2* n;i++) {
        if (mp[nums[i]][0] == i) {
            cout << mp[nums[i]][1] + 1 << " ";
        }else {
            cout << mp[nums[i]][0] + 1 << " ";
        }
    }
    return 0;
}