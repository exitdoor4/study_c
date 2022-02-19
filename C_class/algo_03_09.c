#include <stdio.h>
#include <stdlib.h>

struct data{
    int Xpos;
    int Ypos;
};
typedef struct data Pos;

Pos* add_data(void){
    // 필요에 따라서는 값을 입력받아 바로 전달할 수 있지만..
    // 입력받는 시점까지 오래걸릴 경우, 공간을 적절하게 초기화시켜주기도 한다.
    Pos* newNode = (Pos*)malloc(sizeof(Pos));
    newNode->Xpos = 0; newNode->Ypos = 0;
    // 할당받아 적절하게 초기화시키고...
    return newNode;
    // 할당받은 공간을 외부에서 쓸 수 있도록 다른곳으로 전달한다.
}
void input_data (Pos* target){
    printf("함수를 입력하세요 >>");
    scanf("%d%d", &target->Xpos, &target->Ypos);
}
void show_data(Pos* target){
    printf("Xpos = %d, Ypos = %d", target->Xpos, target->Ypos);
}
int main(void) {
    // X, Y 좌표 정보를 보관하는 구조체입니다.
    // 0. 동적할당으로 구조체를 생성하고, 각 변수를 0과 0으로 초기화를 합니다.
    Pos* kim = add_data();

    // 1. 구조체 변수에 입력을 받은 값을 저장하는 함수를 정의하세요.
    input_data(kim);

    // 2. 구조체 변수에 저장된 값을 출력하는 함수를 정의하세요.
    show_data(kim);
    free(kim);
    return 0;
}