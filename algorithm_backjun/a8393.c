#include <stdio.h>

int main(void)
{
    int i, n, result;
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        result += i;
    }
    printf("%d",result);
    return 0; //return 0 을 기입하지 않을 경우 런타임 오류가 나타난다.
}