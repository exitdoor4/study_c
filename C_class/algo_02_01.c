#include <stdio.h>

int main(void){
    int ex1[20];
    int size = sizeof(ex1) / sizeof(ex1[0]);
    int count = size;
    int result = 0;
    int fiveNum = 0;
    for(int i = 0; i < size; i++){
        ex1[i] = count;
        count--;
        }

    for(int i = 0; i < size; i+=2){ // +=2를 사용해서 홀수번만 더한다.
            result += ex1[i];
            printf("%d ", result);
        }
    printf("홀수번째 위치에 있는 값들의 합 %d\n", result);

    for(int i = 0; i < size; i++){
        if ( i % 5 == 0){
            fiveNum += ex1[i];
        }
    }
    printf("5의 배수의 합은 %d\n", fiveNum);
return 0;
}
