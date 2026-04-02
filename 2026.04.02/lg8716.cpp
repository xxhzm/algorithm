#include <bits/stdc++.h>

using namespace std;

bool run(int year){
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

bool checkDay(int year, int m, int d){
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(m < 1 || m > 12) return false;
    if(d < 1) return false;

    if(m == 2){
        if(run(year)) return d <= 29;
        else return d <= 28;
    }

    return d <= days[m - 1];
}

int main(){
    int n;
    cin >> n;
    
    int startYear = n / 10000;

    int ans1 = 0, ans2 = 0;
    for(int i = startYear;i <= 9220;i++){
        string s = to_string(i);
        int m = (s[3] - '0') * 10 + s[2] - '0';
        int d = (s[1] - '0') * 10 + s[0] - '0';
        if(m > 12 || m < 1) continue;
        if(!checkDay(i, m, d)) continue;

        int date = i * 10000 + m * 100 + d;
        if (date <= n) continue;

        if (ans1 == 0) ans1 = date;

        // ABABBABA 型：前四位为 ABAB，且 A != B
        if (s[0] == s[2] && s[1] == s[3] && s[0] != s[1]) {
            ans2 = date;
            break;
        }
    }

    cout << ans1 << '\n' << ans2 << '\n';

    
    return 0;
}