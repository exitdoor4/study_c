#include <stdio.h>

void ex1 (void){
    int num;
    int max =1;
    int result = 0;
    printf("지정한 배수의 수를 입력하세요 >>");
    scanf("%d", &num);
    while(max<=100){
        if(max % num == 0){
            result += max;
        }
        max += 1;
    }
    printf("%d 의 배수의 합은 %d 이다", num, result);
}


int main(void){
    // 3형식, 4형식 함수 안나옵니다.

    // 문제1
    // 1부터 100까지의 범위 내에세
    // 내가 지정한 배수의 합을 구하는 함수를 정의하세요.
    ex1();
    return 0;
}

