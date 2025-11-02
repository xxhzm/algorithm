#include <stdio.h>

int main() {
    int n, k, s = 0;
    scanf("%d%d", &n, &k);
    s = n;
    while (n / k > 0) {
        s += n / k;
        n = n / k + n % k;
    }
    printf("%d", s);
}
