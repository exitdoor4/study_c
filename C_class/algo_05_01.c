#include <stdio.h>
#include <stdlib.h>
// 스택의 주 사용처.
struct stack {
    char ch;
    struct stack* link;
};
typedef struct stack Stack;

Stack* getNode(void) {
    Stack* newNode = (Stack*)malloc(sizeof(Stack));
    newNode-> ch = 0;
    newNode->link = NULL;
    return newNode;
}

void push(Stack** top, char ch){
    Stack* tmp = *top;    
    *top = getNode();
    (*top)->ch = ch;
    (*top)->link = tmp;
}
int pop(Stack** top){
    if(*top== NULL) return 0;
    int data = (*top)->ch;
    Stack* tmp = *top;
    *top = (*top)->link;
    free(tmp);
    return data;
}

int main(void) {
    // Stack 자료구조의 주 사용처.
    // 순서가 중요한 곳에 사용된다.
    // 실시된 작업, 처리된 순서 등이 중요하고
    // 이를 되돌아가야 할 때...
    Stack* top = NULL;
    printf("영어로 된 문자열 입력 >> ");
    while(1) {
        char tmp; scanf("%c", &tmp);
        if(tmp=='\n') break;
        else push(&top, tmp);
    }
    printf("뒤집힌 결과물 : ");
    while(top !=NULL){
        printf("%c", pop(&top));
    }
    printf("\n");
    return 0; 
}