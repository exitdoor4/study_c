#include <stdio.h>

struct data{
    int n1;
    int n2;
};
typedef struct data Node;
int main(void){
    // 구조체 변수 2개를 선언합니다.
Node data1;
Node data2;
    // 각각 구조체 변수에 정수값들을 입력받아 저장합니다.
    printf("data1의 저장된 정수 2개 >>");
    scanf("%d%d", &data1.n1, &data1.n2);
    printf("data2의 저장된 정수 2개 >>");
    scanf("%d%d", &data2.n1, &data2.n2);
    // 1. 각 구조체 변수에 저장된 값들의 합을 출력하세요.
    printf("각 변수의 저장된 값의 합 : %d / %d\n", data1.n1+data1.n2, data2.n1+data2.n2);
    printf("n1끼리의 합 : %d / n2끼리의 합 : %d", data1.n1+data2.n1, data1.n2+data2.n2);
    // 2. 각 구조체 변수의 n1, n2끼리의 합을 출력하세요.

    // ex ) 첫번째 구조체에 1, 3 / 두번째 구조체에 9, 11을 저장했을 경우
    // 1. 각 변수의 저장된 값의 합 : 4 / 20
    // 2. n1끼리의 합 : 10 / n2끼리의 합 : 14
    return 0;
}