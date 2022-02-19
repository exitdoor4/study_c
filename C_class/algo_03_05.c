#include <stdio.h>

struct data {
    double f1;
    int n1;
};
typedef struct data Node;

void input_data1(double* pfnum, int* pnum) {
    // 포인터 : 함수에서 return이 2개이상 필요할 때
    //        return을 대신 수행하기 위한 변수
    printf("실수, 정수 입력 >>");
    scanf("%lf", pfnum);
    scanf("%d", pnum);
}
Node input_data2(void){
        // 구조체의 단점: 하나의 덩어리로 넘겨받으면, 복사되는 양이 너무 많다.
    Node data1;
    printf("실수, 정수 입력 >>");
    scanf("%lf", &data1.f1);
    scanf("%d", &data1.n1);
    // 변수이기 때문에 같은 자료형이면 값의 복사가 가능하지만 비효율적이다.
    return data1;
    // 구조체변수에 대해서 포인터가 항상 따라 붙는다. 궁전으로 갈 수가 있어
}
void input_data3(Node* data1){
    printf("실수, 정수 입력 >>");
    // 1. 받아온 구조체 공간을 참조한다.
    // 2.참조한 구조체중 득정 변수를 지정한다.
    // 3. 그 변수의 주소값을 끄집어낸다.
    scanf("%lf", &(*data1).f1);
    // 1. 받아온 구조체 공간을 구조체 자료형과 대조한다.
    // 2. 자료형과 대조하여, 특정 멤버변수에 바로 접근한다.
    // 3. 해당 변수의 주소값을 끄집어낸다.
    scanf("%d", &data1->n1);

}
int main(void) {
    Node data1;
    // 호출할 때 8바이트를 전달하고, 12바이트를 복사한다.
    input_data1(&data1.f1, &data1.n1);
    printf("%.2f %d\n", data1.f1, data1.n1);

    // 호출할 때 전달은 없지만, 내부에서 16바이트를 생성하고
    // 외불 16바이트를 전달한다.
    data1 = input_data2();
    printf("%.2f %d\n", data1.f1, data1.n1);

    // 호출할 때 4바이트를 전달하고, 12바이트를 복사한다.
    input_data3(&data1);
    printf("%.2f %d\n", data1.f1, data1.n1);
    return 0;
}