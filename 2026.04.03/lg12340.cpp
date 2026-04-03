#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    string str = "LANQIAO";
    int ans = 0;
    for(int i = 0 ;i < h;i++){
        int startIndex = 0;
        startIndex += i % 7;
        for(int j = 0;j < w;j++){
            if(startIndex >= str.size()){
                startIndex = 0;
            }
            if(str[startIndex] == 'A'){
                ans++;
            }
            startIndex++;
        }
    }
    
    cout << ans;
    
    return 0;
}