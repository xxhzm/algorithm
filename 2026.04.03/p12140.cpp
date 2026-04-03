#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    for(int i = 0;i < n;i++){
        cin >> c[i];
    }

    int m;
    cin >> m;
    long long ans = 0;
    int aIndex = 0;
    int bIndex = 0;
    int cIndex = 0;
    vector<vector<int>> x(m, vector<int>(3));
    for(int i = 0;i < m;i++){
        for(int j = 0;j < 3;j++){
            cin >> x[i][j];
        }
    }

    for(int i = 0;i < m;i++){
        aIndex = (aIndex + x[i][0]) % n;
        bIndex = (bIndex + x[i][1]) % n;
        cIndex = (cIndex + x[i][2]) % n;
        if(a[aIndex] == b[bIndex] && a[aIndex] == c[cIndex]){
            ans += 200;
            continue;
        }
        if(a[aIndex] == b[bIndex] || a[aIndex] == c[cIndex] || b[bIndex] == c[cIndex]){
            ans += 100;
            continue;
        }

        if(a[aIndex] + 1 == b[bIndex] && b[bIndex] + 1 == c[cIndex]){
            ans += 200;
            continue;
        }
        
        vector<int> y;
        y.push_back(a[aIndex]);
        y.push_back(b[bIndex]);
        y.push_back(c[cIndex]);

        sort(y.begin(), y.end());
        if(y[0] + 1 == y[1] && y[1] + 1 == y[2]){
            ans += 100;
        }
    }

    cout << ans;
    
    return 0;
}