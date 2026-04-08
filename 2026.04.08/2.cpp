#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str = "2026";
    for(int i = 1;i <= n;i++){
        int s = 0;
        for(int j = 1;j <= i;j++){
            cout << str[s++];
            if(s >= str.size()) {
                s = 0;
            }
        }
        cout << "\n";
    }
    // 请在此输入您的代码
    return 0;
}