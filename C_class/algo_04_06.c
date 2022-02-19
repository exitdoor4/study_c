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
    // 기존 꼭대기 정보를 복사하고
    Stack* tmp = *top;
    // 기존 꼭대기는 덮어쓰기로 없애버리고
    *top = getNode();
    // 새로운 꼭대기에 값을 저장하고
    (*top)->data = data;
    // 복사한 기존 꼭대기를 새로운 꼭대기 밑에 깐다.
    (*top)->link = tmp;
    // 하나의 절차/알고리즘. 함수를 고칠 필요가 없음.
}

int main(void){
    Stack* top = NULL;
    // Stack : 쌓아올리는 구조    
    push(&top,10);
    push(&top,20);
    printf("top->data : %d\n", top->data);
    printf("top->link->data : %d\n", top->link->data);
    return 0;
}