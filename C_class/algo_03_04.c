#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct data {
    int n1;
    int n2;
};

typedef struct data Node;

int main(void) {
    Node arr[8];
    srand(time(NULL));
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        arr[i].n1 = rand() % 8;
        arr[i].n2 = rand() % 8 + 10;
    }

    // 실습
    // 1. 구조체 배열에 저장된 n1값은 버블정렬로 정렬시키세요.
    for(int j = size -2; j >= 0; j--)
        for (int i = 0; i <= j; i++){
            if(arr[i].n1 > arr[i+1].n1){
                int tmp = arr[i].n1;
                arr[i].n1  = arr[i+1].n1;
                arr[i+1].n1 = tmp;
            }
        }
    printf(" 버블정렬로 정렬 시켰다.\n");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i].n1);
    }
    printf("\n");

    // 2. 구조체 배열에 저장된 n2값은 선택정렬로 정렬시키세요.
    for(int j = 0; j <= size-2; j++){
        for(int i = j+1; i < size; i++){
            if(arr[j].n2>arr[i].n2){
                int tmp = arr[j].n2;
                arr[j].n2 = arr[i].n2;
                arr[i].n2 = tmp;
            }
        }
    }
    printf(" 선택정렬로 정렬 시켰다.\n");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i].n2);
    }
    return 0;
}