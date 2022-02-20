#include <stdio.h>
#include <stdlib.h>

// enQueue 이론과 실습
struct queue {
    int data;
    struct queue* link;
};
typedef struct queue Queue;

Queue* getNode(void) {
    Queue* newNode = (Queue*)malloc(sizeof(Queue));
    // 동적할당은 실패할 수 있으니 언제나 체크한다.
    if(newNode != NULL){
        newNode->data = 0;
        newNode->link = NULL; // 포인터는 항상 NULL 로 채워야한다.
    }
    return newNode;
}

void enQueue(Queue** front, Queue** rear, int data){ 
    Queue* tmp = getNode();
    // 받아온 공간이 존재하는지 여부를 체크해야한다.
    if(tmp == NULL) return;
    tmp -> data = data;
    // *front의 상태에 따라서 작동방식이 다름
    // 기본적으로, 이미 준비된 공간을 순서에 맞게 재배치하는 것.
    if(*front== NULL) *front = tmp;
    else (*rear)->link = tmp;
    *rear = tmp;
}

int main(void){
    Queue* front = NULL; // 값을 꺼낼 때 사용하는 변수
    Queue* rear = NULL; // 값을 저장시킬 때 사용하는 변수

    // 테스트 코드
    enQueue(&front, &rear, 10);
    enQueue(&front, &rear, 20);
    enQueue(&front, &rear, 30);
    printf("%d -> ", front -> data);
    printf("%d -> ", front -> link -> data);
    printf("%d -> ", front -> link -> link -> data);
    printf("%d\n -> ", front -> link -> link -> link);
    // 10 -> 20 -> 30 -> 0
    return 0;
}