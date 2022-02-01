#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    double arr[15];
    int size = sizeof(arr) / sizeof(double);
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i]=(rand() % 20 + 1) + (rand() % 100) / (double)(100);
    }
    // 문제1. 배열에 있는 값을 출력하세요.
    for(int i = 0; i < size; i++){
        printf("%0.2lf, " ,arr[i]);
    }
    printf("\n");
    // 문제2. 버블 정렬을 진행하고, 제일 큰수와 제일 작은 수를 
    //       출력하세요.

    for (int j = size-2; j >=0; j--){
        for (int i=0; i <= j; i++){
            if(arr[i] > arr[i+1]) {
                double tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }
    printf("제일 작은 수 %0.2lf, 제일 큰 수 %0.2lf", arr[0], arr[size-1]);

    return 0;
}