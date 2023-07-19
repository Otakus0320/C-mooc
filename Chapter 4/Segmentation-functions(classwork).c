#include <stdio.h>

int main() {
    int num;
    int result;
    scanf("%d", &num);
    switch  (num >= 0) {
        case 1:
            result = (num == 0) ? 0 : 2 * num;
            printf("%d", result);
            break;
        case 0:
            result = -1;
            printf("%d", result);
            break;
    }
}
