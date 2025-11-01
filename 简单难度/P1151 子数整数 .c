#include <stdio.h>

int main() {
    int k, ok = 0;
    scanf("%d", &k);
    for (int i = 10000; i <= 30000; i++) {
        int i1 = (i / 10000) * 100 + (i / 1000 % 10) * 10 + (i / 100 % 10);
        int i2 = (i / 1000 % 10) * 100 + (i / 100 % 10) * 10 + (i / 10 % 10);
        int i3 = (i / 100 % 10) * 100 + (i / 10 % 10) * 10 + (i % 10);
        if (i1 % k == 0 && i2 % k == 0 && i3 % k == 0) {
            printf("%d\n", i);
            ok = 1;
        }
    }

    if (ok == 0) {
        printf("No");
    }

    return 0;
}
