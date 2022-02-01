#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // time(NULL) -> 1970년 1월 1일 00시 기준 누적 초단위 시간을 출력하는 함수
    // srand(정수값); -> 전달된 정수값을 이용해 난수목록표를 생성하는 함수
    // rand(); -> 생성된 목록표로부터 값을 하나씩 가져오는 함수
    
    //srand()에 자동으로 바뀌는 정수값을 전달하여, 새로운 목록표를 만드는 것
    srand(NULL);
    // 한번만 실행하면 끝.
    printf("%d\n", rand() % 50); // 0~49
    printf("%d\n", rand() % 100 + 1); // 1 ~ 100
    printf("%d\n", rand() % 20 + 6); // 6 ~ 25
    // rand()에서 나오는 값이 균일하게 나오지 않기 때문에, 연산으로 범위를 제한함.

    int arr[15];
    // 1. 위의 배열에 임의의 값 15개를 저장합니다.
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 30 + 1;
    }
    // 2. 위의 배열에 저장된 값을 출력합니다.
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    // 3. 위의 배열에 저장된 값중 제일 큰 값과 제일 작은 값을 찾아 출력합니다.
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("제일 큰 값은 %d 이고 제일 작은 값은 %d 이다.", max, min);
return 0;
}