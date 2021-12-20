#include<stdio.h>

int main(){
    double a, b, result;

    scanf("%lf",&a);
    scanf("%lf",&b);

    result = a/b;
    printf("%.13lf",result); // 유효숫자가 13개
    return 0;

    // 오차범위가 10^-9 이야여야 하므로 여유있게
    // 많은 bit를 사용해야 하므로 float가 아닌 double을 사용해야한다.
}