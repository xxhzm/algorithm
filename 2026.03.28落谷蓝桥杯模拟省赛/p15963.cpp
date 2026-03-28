#include <iostream>

using namespace std;

int main() {
    int year = 2239;
    int month = 9;
    int day = 9;

    long long ans = 0;

    while (year < 9876) {
        unordered_map<int, int> cnt;
        int tmpYear = year;
        while (tmpYear != 0) {
            cnt[tmpYear % 10]++;
            tmpYear /= 10;
        }
        int tmpMonth = month;
        while (tmpMonth != 0) {
            cnt[tmpMonth % 10]++;
            tmpMonth /= 10;
        }

        int tmpDay = day;
        while (tmpDay != 0) {
            cnt[tmpDay % 10]++;
            tmpDay /= 10;
        }
        int tempAns = 0;
        int flag = false;
        for (int i = 0; i < 10; i++) {
            if (tempAns != 0) {
                if (cnt[i] != 0 && tempAns != cnt[i]) {
                    flag = true;
                    break;
                }
            }
            if (cnt[i] != 0 && tempAns == 0) {
                tempAns = cnt[i];
            }
        }

        if (flag != true) {
            ans++;
        }

        if (month == 12 && day == 31) {
            year++;
            month = 1;
            day = 1;
            continue;
        }

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day != 31) {
                day++;
            }else {
                month++;
                day = 1;
            }
        }else if (month == 2){
            if (day == 28) {
                if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
                    day++;
                }else {
                    month++;
                    day = 1;
                }
            }else if (day == 29) {
                day = 1;
                month++;
            }else {
                day++;
            }
        }else {
            if (day != 30) {
                day++;
            }else {
                month++;
                day = 1;
            }
        }
    }

    cout << ans;

    return 0;
}