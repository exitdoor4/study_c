#include <stdio.h>

int main(void)
{
    int n,x,i,a;
    scanf("%d %d", &n,&x);

    for(i=0;i<n;i++){
        scanf("%d",&a);
        if (a<x) printf("%d ",a); //출력할 때 띄어쓰기도 포함이 되어야 정답처리되는데 애좀 먹었다.
    }
    return 0;
}