#include <stdio.h>

int main() {
    int arr[10], i, height, n = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &height);
    for (i = 0; i < 10; i++) {
        if (height + 30 - arr[i] >= 0) {
            n++;
        }
    }
    printf("%d", n);
}
