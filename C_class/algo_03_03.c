#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct data {
    double n1;
    int n2;
};
typedef struct data Node;

int main(void){
    // 구조체를 이용하여 배열만들기 : 구조체와 배열은 서로 작용하는 분야가 다르다.
    // 구조체 : 하나의 변수를 만들고, 다루는 방법
    // 배열 : 변수들을 선형으로 만들어, 다루는 방법
    srand(time(NULL));
    Node data1;
    Node arr1[5];
    // 배열이기 때문에 크기를 구하고..
    int size = sizeof(arr1)/sizeof(arr1[0]);
    // 배열이기 때문에 반복을 돌리고...
    for (int i=0;i<size;i++) {
        arr1[i].n1 = rand() % 10 + (rand() % 10);
        arr1[i].n2 = rand() % 10;
    }
    // 배열이기 때문에, 서로 다른 목적의 코드는 같은 반복으로 합치지 않는다.
    for (int i=0;i<size;i++) {
        printf("%.2f %d \n", arr1[i].n1, arr1[i].n2);
    }
    return 0;
}