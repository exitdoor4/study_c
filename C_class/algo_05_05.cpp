#include <stdio.h>
#include <stdlib.h>

// show_Queue, clear_Queue 실습
struct queue {
    int data;
    struct queue* link;
};
typedef struct queue Queue;

Queue* getNode(void) {
    Queue* newNode = (Queue*)malloc(sizeof(Queue));
    if(newNode != NULL){
        newNode->data = 0;
        newNode->link = NULL; 
    }
    return newNode;
}
void enQueue(Queue** front, Queue** rear, int data){ 
    Queue* tmp = getNode();

    if(tmp == NULL) return;
    tmp -> data = data;
    if(*front == NULL) *front = tmp;
    else (*rear)->link = tmp;
    *rear = tmp;
}
int deQueue(Queue** front, Queue** rear){
    if(*front == NULL) return 0;
    int data = (*front)->data;
    Queue* tmp = *front;
    *front = (*front)->link;
    if(*front ==NULL) *rear = NULL;
    free(tmp);
    return data;
}
void show_Queue(Queue** front, Queue** rear){
   // 반복문
   // 여기서 rear는 사실 쓸모없음
   Queue* tmp = *front;
   while (tmp != NULL){
       printf("%d -> ", tmp->data);
       tmp = tmp->link;
   }
}
void clear_Queue(Queue** front, Queue** rear){
    // 반복문
    // front, rear 둘 다 NULL이 되어야 함
    // 선형 구조이면, 이런 방식으로 제거할 수 있다.
    while(*front != NULL) deQueue(front, rear);
    // 별개 함수를 따로 안만들고, 값 꺼내기 겸 공간제거함수를 반복돌린다.
}
int main(void){
    Queue* front = NULL; 
    Queue* rear = NULL; 
    enQueue(&front, &rear, 10);
    enQueue(&front, &rear, 20);
    enQueue(&front, &rear, 30);
    show_Queue(&front, &rear);
    clear_Queue(&front, &rear);
    printf("deQueue : %d\n", deQueue(&front, &rear));
    return 0;
}