#include <stdio.h>

// 짧은 거리에 호텔 방 출력

int main(void){
    
    int t,h,w,n;
    scanf("%d", &t);
    for(int i = 0; i <= t; i++){
        scanf("%d %d %d", &h, &w, &n);
        // H는 호텔의 층수, W는 각 층의 방 수, 
        // N은 몇 번째 손님
        for(int j = 1; j < w; j++){
            if(h * j >= n ){
                n = (h%n)* 100 + j; ㅍ
                break;
            }
        }
        printf("%d", n);
    }



    return 0;
}