#include <stdio.h>

struct data {
    int n1;
    int n2;
    int n3;
    double avg;
};
typedef struct data Node;

int main(void) {
    // 실습
    // 위 구조체로 변수를 선언하고
    // 정수값 3개를 입력을 받아 멤버변수 n1, n2, n3 에 저장합니다.
    // 저장된 3개의 값을 이용해 평균을 구하고 이를 멤버변수 avg에 저장합니다.
    int m1, m2, m3;
    printf("3가지의 수를 입력하세요 >>");
    scanf("%d%d%d", &m1, &m2, &m3);
Node data1 = {m1, m2, m3, 0};
data1.avg = (m1 + m2 + m3)/(double)3;

printf("(%d + %d + %d)/3 = %.2f",data1.n1, data1.n2, data1.n3, data1.avg);
    // 저장된 값들을 아래와 같은 양식으로 출력하세요.
    // ex) (5 + 5 + 6)/3 = 5.33
    return 0;
}