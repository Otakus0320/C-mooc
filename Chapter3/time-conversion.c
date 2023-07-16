#include <stdio.h>

int main()
{
    int time;
    scanf("%d", &time);
    int utc;
    if (time>800){
        utc = time-800;
    } else{
        utc = time + 1600;
    }
    printf("utc=%d", utc);
}
