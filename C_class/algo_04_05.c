#include <stdio.h>
#include <stdlib.h>

struct stack{
    int data;
    struct stack* link;
};
typedef struct stack Stack;

Stack* getNode(void){
    // 맴버변수중 배열이 있다 -> 배열을 초기화시키기 위한 반복 등...
    Stack* newNode = (Stack*)malloc(sizeof(Stack));
    newNode-> data = 0;
    newNode-> link = NULL;
    return newNode;
}
int main(void){
    // Stack : 쌓아올리는 구조    
    // getNode() : 적절하게 초기화된 구조체를 생성하는 함수
    //             -> 값을 보관시키는 함수가 아님.
    //             -> 값을 보관시키기 위한 공간을 만드는 함수
    Stack* top = NULL;
    top = getNode();

    // 값을 저장시킨다.
    top->data = 10;
    return 0;
}