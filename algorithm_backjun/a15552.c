#include <stdio.h>

int main(void)
{
    int t,i,a,b;
    scanf("%d", &t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
} // c언어는 다른 언어들보다 실행속도가 빠르다.