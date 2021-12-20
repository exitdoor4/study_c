#include<stdio.h>

int main(){

    float first, second;
    printf("첫번쨰 계산할 값을 입력하세요 ==>");
    scanf("%f",&first);
    printf("두번쨰 계산할 값을 입력하세요 ==>");
    scanf("%f",&second);
    printf("%4.2f + %4.2f = %4.2f\n",first, second, first+second);
    printf("%4.2f - %4.2f = %4.2f\n",first, second, first-second);
    printf("%4.2f * %4.2f = %4.2f\n",first, second, first*second);
    printf("%4.2f / %4.2f = %4.2f\n",first, second, first/second);

}