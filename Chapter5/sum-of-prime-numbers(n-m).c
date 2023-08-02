#include <stdio.h>

int isprime(int a);
int main() {
    int n,m;
    int sum = 0;
    int cnt = 0;
    int num = 1;
    scanf("%d %d", &n, &m);
    while (cnt<m){
        while (cnt < n-1){
            num += 1;
            if (isprime(num)){
                cnt += 1;
            }
        }
        num += 1;
        if (isprime(num)){
            sum += num;
            cnt += 1;
        }
    }
    printf("%d", sum);
}

int isprime(int a){
    int i;
    for (i=2; i<a; i++){
        if (a % i == 0){
            return 0;
        } else{
            continue;
        }
    }
    return 1;
}
