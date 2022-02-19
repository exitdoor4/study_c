#include <stdio.h>
#include <stdlib.h>
struct data {
    int X, Y;
};

typedef struct data Pos;
int main(void) {
    Pos* ball = (Pos*)malloc(sizeof(Pos));
    // 하나의 공간을 두 개 이상의 포인터로 다루면서...
    // 공간을 관리하는 주체가 하나가 되도록 하기 위해서는
    // NULL을 이용해 <아무것도 없음> 을 저장한다.
    Pos* player1 = NULL;
    Pos* player2 = NULL;
    // player1에게 공을 전달하면 위치정보는 0, 0으로 초기화됩니다.
    player1 =ball;
    player1 -> X = 0; player1 -> Y = 0;
    // 공을 다른 사람에게 전달하면 X값은 1 감소하고, Y값은 1 증가합니다.
    // 5번 공을 주고 받고
    // 구조체에 저장된 값을 출력하세요.
    for (int i=0; i<5;i++){
        Pos* tmp = player1;
        player1 = player2;
        player2 = tmp;
        if(player1 == player2) printf("공은 하나만 존재합니다...\n");
        ball-> X--; 
        ball-> Y++; 
    } 
    // 
    // 단, 공은 하나만 존재합니다. 중복이 존재하지 않습니다.
    printf("저장된 값 : %d, %d\n", ball->X, ball->Y);
    return 0;
}
