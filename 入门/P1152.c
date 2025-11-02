#include <stdio.h>
#include <math.h>

int main() {
    int a[1000], b[1000], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 获取所有的绝对值的差放到b中
    for (i = 1; i <= n - 1; i++) {
        b[i] = 0;
    }

    for (i = 0; i < n - 1; i++) {
        if (abs(abs(a[i] - a[i + 1])) >= 1 && abs(a[i] - a[i + 1]) <= n - 1) {
            b[abs(a[i] - a[i + 1])] = 1;
        } else {
            printf("Not jolly");
            return 0;
        }
    }

    for (i = 1; i <= n - 1; i++) {
        if (b[i] == 0) {
            printf("Not jolly");
            return 0;
        }
    }

    printf("Jolly");
    return 0;
}
