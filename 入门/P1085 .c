#include <stdio.h>

int main() {
    int i, a, b, arr[7] = {0}, max = 0, d;
    for (i = 0; i < 7; i++) {
        scanf("%d%d", &a, &b);
        if (a + b > 8) {
            arr[i] = a + b;
        }
    }

    for (i = 0; i < 7; i++) {
        if (arr[i] > max) {
            max = arr[i];
            d = i;
        }
    }
    if (max == 0) {
        printf("%d", 0);
    } else {
        printf("%d", d + 1);
    }


    return 0;
}
