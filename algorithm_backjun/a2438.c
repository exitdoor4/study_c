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
}