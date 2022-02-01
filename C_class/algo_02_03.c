#include <stdio.h>

int main(void){
    // 알고리즘 : 규칙, 루틴, 습관, 절차
    // 1. 버블정렬
    // 오름차순 : 가장 마지막에 제일 큰 값이 배치된다.
    // 내림차순 : 가장 마지막에 제일 작은 값이 배치된다.
    int arr[4] = {4,7,1,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int j = size-2; j >=0; j--) {
        for (int i = 0; i <= j; i++) {
            if (arr[i] > arr[i+1]) {
             int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    
    }
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    } printf("\n");
    return 0;
}