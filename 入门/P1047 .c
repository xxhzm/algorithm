#include <stdio.h>

int main() {
    int l, m, i, x, y, s = 0;
    scanf("%d%d", &l, &m);
    int arr[l + 1];
    // 初始化为1
    for (i = 0; i <= l; i++) {
        arr[i] = 1;
    }

    for (i = 0; i < m; i++) {
        scanf("%d%d", &x, &y);
        // 在数组将对应的删除
        for (int j = x; j <= y; j++) {
            arr[j] = 0;
        }
    }

    for (i = 0; i <= l; i++) {
        if (arr[i] == 1) {
            s++;
        }
    }
    printf("%d", s);
}
