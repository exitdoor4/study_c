#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct data{
    int var1;
    double var2;
};
typedef struct data Node;

int main(void){
    Node* arr[5];
    int size = sizeof(arr) / sizeof(Node*);
    for (int i = 0; i < size; i++){
        arr[i] = (Node*)malloc(sizeof(Node));
        arr[i]->var1 = rand()%10;
        arr[i]->var2 = (rand()%10) / 10.0;
    }
    for (int i = 0; i < size; i++){
    printf("%d %.1f\n", arr[i]->var1, arr[i]->var2);
    }
    printf("\n");
    // 위 배열에는 임의의 값들이 저장됩니다.
    // 구조체 변수의 var1 멤버변수에 저장된 값을 기준으로 구조체를 버블정렬시키세요.
    for(int j = size; j >= 1; j--){
        for(int i = 0; i < j-1; i++){
            if(arr[i]->var1 >arr[i+1]->var1){
               Node* tmp = arr[i];
               arr[i] = arr[i+1];
               arr[i+1] = tmp; 
            }
        }
    }
    // ex) 저장된 값이
    // (1, 0.8) (9, 0.5) (3, 0.3) (4, 0.2) (7, 0.9) 일 경우

    for (int i = 0; i < size; i++){
        printf("%d %.1f\n", arr[i]->var1, arr[i]->var2);
    }
    free(arr);
    return 0;
}