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
// retrun이 존재하며, 외부로 돌려주는 값은 구조체 멤버변수에 따라 달라진다.
// 무조건 int가 아니니 주의..
// 전체적인 사용량은 배열보다 더 많다.
// 관리 측면에서는 배여보다 더 효율적이다.
int pop(Stack** top) {
    // 구조체에 보관된 값을 복사
    int data = (*top)->data;
    // 현재 꼭대기를 정보를 임시변수에 복사
    Stack* tmp = *top;
    // 꼭대기의 위치를 밑에 깔려 있는 것으로 변경
    *top = (*top)->link;
    // 복사된 현재 꼭대기를 이용해 동적할당해제
    free(tmp);
    // 복사된 값을 외부로 전달
    return data;
}

int main(void){
    Stack* top = NULL;
    // Stack : 쌓아올리는 구조    
    push(&top,10);
    push(&top,20);
    printf("top->data : %d\n", top->data);
    printf("top->link->data : %d\n", top->link->data);
    printf("pop: %d\n", pop(&top)); // pop : 20
    printf("pop: %d\n", pop(&top)); // pop : 10
    printf("top : %p\n", top); // top : 0000000
    return 0;
}