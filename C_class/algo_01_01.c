#include <stdio.h>

// int get_sum(int sta, int end){
//     int result = 0;
//     for (int i = sta; i <= end; i++){
//     result += i;
//     }
//     return result;
// }


// int main(void){
//     // 문제1. 다음 코드에서 합을 구하는 구간을 함수로 만들어 사용하세요.
//     int result = 0;
//     int sta;
//     int end;
//     printf("시작수와 끝 수를 입력하세요 >>");
//     scanf("%d%d", &sta, &end);
//     result = get_sum(sta, end);
//     printf("%d ~ %d 까지의 합: %d \n", sta, end, result);
// }

int get_count(int sta, int plus){
    int max =1;

    for(int i=sta; max < plus; i++ ){
        max += 1;
        sta += i+1;
    }
    return sta;
}

int main(void){
    int result1 = get_count(-5, 1);
    int result2 = get_count(0, 4);
    int result3 = get_count(10, 2);
    printf("%d %d %d", result1, result2, result3); 
    return 0;
}