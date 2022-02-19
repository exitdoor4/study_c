#include <stdio.h>
#include <stdlib.h>

struct stack {
    int data;
    struct stack* link; // 이게 있으면 자기참조구조체라고 하며 구분함.
};
typedef struct stack Stack;
int main(void) {
    // 배열 
    // 1. 위치정보를 관리할 변수가 필요하다 : 인덱스 번호
    // 2. 고정된 크기를 가진다.
    //         -> 동적할당을 이용하면 반 정도의 대응만 가능하다.
    //         -> 내가 설정한 크기만큼 만들어진다.
    //         -> 얼마나 저장될지 모르는 자료를 배열로 다루는 것은 불가능이다.
    //         -> 수요/공급의 예축이 쉬운가? 불가능하다.

    // 자기참조구조체를 이용한 자료구조 구현
    // 자기자신을 다룰 수 있는 포인터변수가 있는 구조체 

    Stack* anker = NULL;
    anker = (Stack*)malloc(sizeof(Stack));
    anker-> data = 10;
    anker-> link = (Stack*)malloc(sizeof(Stack));
    anker-> link->data =20;
    anker-> link->link = (Stack*)malloc(sizeof(Stack));
    anker-> link->link->data = 30;
    anker-> link->link->link = NULL;

    printf("%d\n", anker->data);
    printf("%d\n", anker->link->data);
    printf("%d\n", anker->link->link->data); 
    
    // Stack, Queue, Link List, Tree 4가지 큰 범주가 존재한다.
    // 각 자료구조에서 어떤 알고리즘을 구현하고, 어떤 구조체를 이용하는가에 따라..
    // 단방향/ 양방향
    // 1차원, 2차원
    // 선형/원형/비선형
    // 다양한 형태로 값을 보관하여 다룰 수 있다.
    
    return 0; 
}