#include <iostream>
using namespace std;
int main()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    string ans;
    for(char c: s){
        while(!ans.empty() && k > 0 && ans.back() < c){
            k--;
            ans.pop_back();
        }
        ans.push_back(c);
    }

    while(k > 0){
        ans.pop_back();
        k--;
    }

    cout << ans;
    // 请在此输入您的代码
    return 0;
}