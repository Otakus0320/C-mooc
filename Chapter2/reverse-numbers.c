#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", num/100 + num%10*100 + num/10%10*10);
}
