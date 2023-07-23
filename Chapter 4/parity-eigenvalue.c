#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);
    int eigenvalue = 0;
    int test = 0;
    int count = 0;
    while (num != 0) {
        count++;
        test = num % 10;
        num /= 10;
        if (count % 2 != 0){
            if (test % 2 != 0){
               eigenvalue = eigenvalue * 10 + 1;
            } else{
                eigenvalue *= 10;
            }
        } else{
            if (test % 2 == 0){
                eigenvalue = eigenvalue * 10 + 1;
            } else{
                eigenvalue *= 10;
            }
        }
    }
    int new_eigenvalue = 0;
    while (eigenvalue != 0){
        new_eigenvalue = new_eigenvalue * 10 + eigenvalue % 10;
        eigenvalue /= 10;
    }
    int value = 0;
    int cnt = 0;
    while (new_eigenvalue != 0){
        if (new_eigenvalue % 10 != 0){
            value = value + pow(2, cnt);
        }
        cnt++;
        new_eigenvalue /= 10;
    }
    printf("%d",value);
}
