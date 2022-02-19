#include <stdio.h>
#include <stdlib.h>

struct data {
    int n1;
    int n2;
};
typedef struct data Node;

Node* make_Node(int n1, int n2){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->n1 = n1;
    newNode->n2 = n2;
    return newNode;
}
// 이중포인터 : 포인터 변수에 별을 하나 더 붙인 것
// 단일포인터의 왼쪽을 다르는 변수
// *가 없음 : 대상 포인터변수의 공간
// *가 한번 : 대상 포인터변수가 저장한 동적할당받은 공간
// *가 두번 : 동적할당받은 공간을 이용해 접근한 구조체
// 주 목적
// 1. 포인터 변수가 관리하는 값을 건드리는 것이 주 목적
// 2. **는 겸사겸사 포인터변수가 가리키는 대상의 값이 필요할 때 쓰기 위한 것
void swap_ptr(Node** node1, Node** node2){
    Node* tmp = *node1;
    *node1 = *node2;
    *node2 = tmp;
}

int main(void) {
    // 구조체를 동적할당하는 이유
    // 1. 정적변수로 선언하면, 공간을 미리 차지하고 있는 상태가 된다.
    // 2. 공간이 크기 때문에 프로그램의 메모리 사용량이 커진다.
    Node* node1 = make_Node(10, 20);
    Node* node2 = make_Node(30, 40);
    printf("전 : (%d %d), (%d %d)\n", node1->n1, node1->n2, node2->n1, node2->n2);

    swap_ptr(&node1, &node2);
    printf("후 : (%d %d), (%d %d)\n", node1->n1, node1->n2, node2->n1, node2->n2);
    return 0; 
}