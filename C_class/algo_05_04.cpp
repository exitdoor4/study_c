#include <stdio.h>
#include <stdlib.h>

// deQueue 이론과 실습
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
// enQueue : 값을 보관하며, 구조를 완성시키는 함수
void enQueue(Queue** front, Queue** rear, int data){ 
    Queue* tmp = getNode();

    if(tmp == NULL) return;
    tmp -> data = data;
    if(*front == NULL) *front = tmp;
    else (*rear)->link = tmp;
    *rear = tmp;
}
// deQueue : 값을 꺼내는 함수. Stack의 pop과 동일한 절차를 밟는다.
int deQueue(Queue** front, Queue** rear){
    if(*front == NULL) return 0;
    int data = (*front)->data;
    Queue* tmp = *front;
    *front = (*front)->link;
    if(*front ==NULL) *rear = NULL;
    free(tmp);
    return data;
}
int main(void){
    Queue* front = NULL; 
    Queue* rear = NULL; 

    enQueue(&front, &rear, 10);
    enQueue(&front, &rear, 20);
    enQueue(&front, &rear, 30);
    printf("%d -> ", front -> data);
    printf("%d -> ", front -> link -> data);
    printf("%d -> ", front -> link -> link -> data);
    printf("%d\n -> ", front -> link -> link -> link);
    printf("deQueue 시작\n");
    printf("deQueue : %d\n", deQueue(&front, &rear)); // 10
    printf("deQueue : %d\n", deQueue(&front, &rear)); // 20
    printf("deQueue : %d\n", deQueue(&front, &rear)); // 30
    printf("result : %d, %d, %d\n",front,rear, front == rear); // 0 0 1
    return 0;
}