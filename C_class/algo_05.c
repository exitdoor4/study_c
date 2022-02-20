#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 스택 복습
struct stack {
    int data;
    struct stack* link;
};

typedef struct stack Stack;
// getNode : 용도에 맞는 동적할당된 공간을 준비시켜주는 함수
Stack* getNode(void) {
    Stack* newNode = (Stack*)malloc(sizeof(Stack));
    newNode->data = 0;
    newNode->link = NULL;
    return newNode;
}
// push : 값을 저장시키는 함수. 쌓아올려준다.
void push(Stack** top, int data){
    Stack* tmp = *top;    
    *top = getNode();
    (*top)->data = data;
    (*top)->link = tmp;
}
// pop : 값을 꺼내주는 함수. 구조를 유지시켜주는 함수.
int pop(Stack** top){
    // 값을 제거하는 종류의 것들은
    // 저장된 내용이 없으면 멈춰야 한다.
    if(*top== NULL) return 0;
    // return 값은 프로그램 상황에 맞춰서 조정한다.
    int data = (*top)->data;
    Stack* tmp = *top;
    *top = (*top)->link;
    free(tmp);
    return data;
}
// show_Stack : 반복을 이용한 저장된 내용 출력s함수
// 단일 포인터로 준비했을 경우, 포인터 변수에 저장된 구조체만 건드리는 것을 의미
void show_Stack1(Stack* top){
    while (top != NULL){
        printf("%d\n", top->data);
        top = top->link;
    }
}
// 사용간에 혼란/헷갈림/실수를 줄이기 위해서 일부로 쓰기도 한다. 2번을 추천함.
void show_Stack2(Stack** top){
    Stack* tmp = *top;
    while (tmp != NULL){
        printf("%d\n", tmp->data);
        tmp = tmp->link;
    }
}
// clear_Stack : 반복을 이용한, 저장된 자료 및 공간을 모두 제거하는 함수
// 단일포인터로도 작동하지만, 프로그램 실행중에도 수행 할 수 있음.
// 반드시 이중포인터로 만든다.
void clear_Stack(Stack** top){
    while(*top != NULL){
    Stack* tmp = *top;
    *top = (*top)->link;
    free(tmp);
    }
}
int main(void) {
    // 스택 : 쌓아올리는 구조
    //   -> 순서가 알아서 생긴다.
    //   -> 넣은 순서의 역순이 값의 순서가 된다.
    Stack* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    show_Stack1(top);
    show_Stack2(&top);
    clear_Stack(&top);
    printf("%d\n", top);
    pop(&top);
    printf("이 내용이 나오도록 pop 함수를 조정하세요\n");
    return 0;
}