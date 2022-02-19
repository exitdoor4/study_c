#include <stdio.h>
#include <stdlib.h>

struct stack{
    int data;
    struct stack* link;
};
typedef struct stack Stack;
// getNode() : 적절하게 초기화된 구조체를 생성하는 함수
Stack* getNode(void){
    Stack* newNode = (Stack*)malloc(sizeof(Stack));
    newNode-> data = 0;
    newNode-> link = NULL;
    return newNode;
}
// push : 준비된 공간에 값을 저장시키는 함수
void push(Stack** top, int data){
    Stack* tmp = *top;
    *top = getNode();
    (*top)->data = data;
    (*top)->link = tmp;
}
// pop : 보관된 값을 외부로 복사처리하며, 제거해주는 함수 
int pop(Stack** top) {
    int data = (*top)->data;
    Stack* tmp = *top;
    *top = (*top)->link;
    free(tmp);
    return data;
}

int main(void){
    Stack* top = NULL;
    // Stack : 쌓아올리는 구조    
    push(&top,10);
    push(&top,20);
    push(&top,30);

    // show_Stack(top); // 보관된 값을 출력하는 함수. 보는 것이 주 목적
    // while 반복으로 구성한다.
    Stack* start = top;
    printf("%d ->", start->data);
    start = start->link;
    printf("%d ->", start->data);
    start = start->link;
    printf("%d ->", start->data);
    // 언제 끝나는지 판단해야 한다.
    printf("NULL\n");

    // clear_Stack(&top); // 보관된 모든 값들을 제거하는 함수. 동적할당해제
    Stack* tmp;
    tmp = top;
    top = top->link;
    free(tmp);
    tmp = top;
    top = top->link;
    free(tmp);
    tmp = top;
    top = top->link;
    free(tmp);
    // while 반복. 값의 수량을 체크해서 돌리는 방식이 아님.
    // 언제 끝나는지 잘 판단해보자... 힌트는 null

    printf("top : %p\n", top); // top : 0000000
    return 0;
}