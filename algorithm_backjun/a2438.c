#include <stdio.h>

int main(void)
{
    int t,i,j;
    scanf("%d", &t);
    for(i=1;i<=t;i++){
        for(j =1;j <=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
    // "*"은 char이고 i는 int이기 떄문에 다중 for문을 사용해야한다.
}