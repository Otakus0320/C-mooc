#include <stdio.h>

int main() {
    int x;
    int s = 0;
    int e = 0;
    do {
        scanf("%d", &x);
        if (x == -1){
            break;
        } else{
            if (x % 2 == 0){
                e++;
            } else{
                s++;
            }
        }
    } while (1);
    printf("%d %d", s, e);
}
