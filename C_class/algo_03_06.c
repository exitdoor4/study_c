#include <stdio.h>

struct data {
    int n1;
    int n2;
};
typedef struct data Node;

void swap1(int* n1, int* n2){
    // 4byte 전달받음
    // 12byte 전달함
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

void swap2_1(Node* data2, Node* data3){
    int tmp1 = data2->n1;
    data2->n1 = data3->n1;
    data3->n1 = tmp1;

    int tmp2 = data2->n2;
    data2->n2 = data3->n2;
    data3->n2 = tmp2;
}
// 어쩔 수 없는 경우가 아닌 이상 전달되는 양이 너무 많다.
void swap2_2(Node* data2, Node* data3){
    // 8바이트 전달받음
    // 16바이트 전달함
    // 각각의 함수 호출에서 
    //          8바이트 전달받음
    //          12바이트 전달함 -
    swap1(&data2->n1, &data3->n1);
    swap1(&data2->n2, &data3->n2);
}
// 구조체를 통쨰로 복사하기 때문에 비효율적이다.
void swap2_3(Node* data2, Node* data3){
    // 8바이트 전달받음
    // 24바이트 전달함
    Node tmp = *data2;
    *data2 = *data3;
    *data3 = tmp;
}


int main(void) {
    Node data1 = { 10,20 };
    printf("SWAP 전 : %d, %d\n", data1.n1, data1.n2);
    // 문제1
    // 구조체 변수에 저장된 두 멤버변수의 값을 서로 바꾸는
    // SWAP 함수를 정의하여 사용하세요.
    swap1(&data1.n1, &data1.n2);
    printf("SWAP 전 : %d, %d\n", data1.n1, data1.n2);

    Node data2 = {1,2};
    Node data3 = {3,4};
    printf("전 : (%d %d) / (%d %d)\n", data2.n1, data2.n2, data3.n1, data3.n2);
    // 문제2
    // 두 구조체 변수에 저장된 값들을 서로 바꾸는
    // SWAP2 함수를 정의하여 사용하세요.
    swap2_1(&data2, &data3);
    printf("후 : (%d %d) / (%d %d)\n", data2.n1, data2.n2, data3.n1, data3.n2);
    return 0;
}