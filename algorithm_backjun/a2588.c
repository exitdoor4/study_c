#include<stdio.h>

int main(void){ //
    int a, b;

    scanf("%d %d",&a, &b);

    int first = b % 10;
    int second = (b%100)/10;
    int third = b / 100;
    printf("%d\n%d\n%d\n%d", a*first, a*second, a*third, a*b);
    return 0;
}