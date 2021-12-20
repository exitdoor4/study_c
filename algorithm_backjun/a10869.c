#include<stdio.h>

int main(void){ // void안할 시 런타임에러 발생 필수 작용
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a/b);
    printf("%d\n",a%b);
    return 0; // int main이기 떄문에 마지막은 정수로 끝내야함
}