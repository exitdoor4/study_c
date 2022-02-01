#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int sta, end;
    printf("시작수와 끝수를 입력하세요 >>");
    scanf("%d%d", &sta, &end); 
    char word[30];
    int size = sizeof(word) / sizeof(char);
    for(int i = 0; i < size -1; i++) {
        word[i]=rand() % 26 + 65; // A(65) ~ Z(90)
    }   word[29] = '\0';
    printf("result : %s\n", word);
    // 문제1. 선택정렬로 문자열들을 정렬시키고 출력하세요.
    //       단, 내가 지정한 구간의 문자만 정렬시키세요.

    for(int j = sta; j < end -1; j++)
        for(int i = j+1; i <= end; i++){
            if(word[j] > word[i]){
                int tmp = word[j];
                word[j] = word[i];
                word[i] = tmp;
            }
        }
    printf("result : %s\n", word);

    return 0;
}
