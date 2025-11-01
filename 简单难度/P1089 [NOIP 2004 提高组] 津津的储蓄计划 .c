#include <stdio.h>

int main() {
    // a 手里的钱
    // b 妈手里的钱
    int i, arr[12], a = 0, b = 0;
    for (i = 0; i < 12; i++) {
        a += 300;
        scanf("%d", &arr[i]);
        a -= arr[i];
        if (a < 0) {
            //这个月超出了预算
            printf("%d", -1 * (i + 1));
            return 0;
        }
        // 给他妈钱
        if (a >= 100) {
            b += (a / 100) * 100;
            a -= (a / 100) * 100;
        }
    }

    b = b + b * 0.2;
    printf("%d\n", b + a);
    return 0;
}
