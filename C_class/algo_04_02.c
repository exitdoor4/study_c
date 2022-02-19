#include <stdio.h>
#include <stdlib.h>

struct data{
    double n1;
    double n2;
};
typedef struct data Node;

int main(void){
    Node* arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        arr[i] = (Node*)malloc(sizeof(Node));
        arr[i]->n1 = i+1;
        arr[i]->n2 = i+1.5;
    }
    int sta, end;
    printf("바꿀 순서 정수를 입력하세요>>");
    scanf("%d%d", &sta, &end);
    
    Node* tmp = arr[sta];
    arr[sta] = arr[end];
    arr[end] = tmp;
    // 내가 입력한 인덱스에 있는 구조체를 서로 바꾸는 코드를 구성하세요.
    // 값이 아닌, 동적할당된 구조체를 옮겨야 합니다.

    for(int i = 0; i < size; i++){
        printf("%d : (%.1f %.1f)\n", i, arr[i]->n1, arr[i]->n2);
    }
    return 0;
}