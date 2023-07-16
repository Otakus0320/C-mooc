#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n - 2; i += 2) {
        printf("%d ", i);
    }
    if (i == n - 2) {
        printf("%d", n);
    } else
        printf("%d", i);
}
