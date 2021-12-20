#include <stdio.h>

int main(void)
{
    int t,i,j,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        for(j=i; j<t; j++){
           printf(" ");
        }
        for(j=t-i;j<t;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0; //어우 좀 빡셌다... 이리저리 맞춰보고 만든 기분
              // 다중 for문을 사용하여 풀었다.
}