#include <stdio.h>

struct stack {
    int data;
    struct data* link;
};
typedef struct stack Data;

int main(void){
    // 스택 : 쌓아올리는 구조
    // '수행했던 기록을 남긴다' 라는 프로그램에 적합하다.
    // 편집기의 undo / redo, 웹브라우저의 뒤로가기 / 앞으로가기
    // 단점 : 넣은 순서가 유지가 되지 않는다. 거꾸로이다.

    // 큐 : 먼저 넣은 것은 먼저 나온다.
    // 넣은 순서를 그대로 유지해준다.
    // -> 기차와 비슷하다. 나열시켜주는 구조.
    Data* top;
    Data p1;
    Data p2;
    Data p3;
    top = &p3;
    top -> link = &p2;
    top->link->link = &p1;
    // 순서 외에는 비슷하다.
    Data* front;
    Data q1;
    Data q2;
    Data q3;
    front = &q1;
    front->link = &q2;
    front->link->link = &q3;
    return 0;
}