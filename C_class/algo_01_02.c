#include <stdio.h>

void PrCount(int count){
    while (count >0){
    printf("%d", count);
    count--;
    };
}

int main(void){
    // 2형식 문제입니다.
    // 문제1. 아래 코드에서 출력구간을 찾아 함수로 만들어 사용하세요.

    int count = 0;
    while (count <= 0) {
        printf("양의 정수 입력>>");
        scanf("%d", &count);
    }
    PrCount(count);
    return 0;
}

// void show_number(int fir, int num, int plus) {
//     while(plus > 0){
//         printf("%d ", fir);
//         fir = fir + num;
//         plus--;
//     }
//     printf("\n");
// }

// int main(void){
//     show_number(10, -1, 5);
//     show_number(10, 2, 3);
//     show_number(-5, -1, 8);
//     show_number(-5, 4, 3);
//     return 0;
// }