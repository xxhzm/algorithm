#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> stus(n);
    long long sum = 0;
    for(long long i = 0;i < n;i++){
        cin >> stus[i];
        sum += stus[i];
    }

    long long l, r;
    cin >> l >> r;

    if (sum < n * l || sum > n * r) {
        cout << -1;
        return 0;
    }

    long long more = 0, less = 0;
    for (long long i = 0; i < n; i++) {
        if (stus[i] > r) more += stus[i] - r;
        if (stus[i] < l) less += l - stus[i];
    }

    cout << max(more, less);
    return 0;
}