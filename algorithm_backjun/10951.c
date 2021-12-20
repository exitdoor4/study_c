#include <stdio.h>

int main(void) {
    int a,b;
    while(scanf("%d %d",&a, &b)!=EOF){
        printf("%d\n", a+b);
    }
    return 0;
} // 무한루프로 문제를 풀어볼려고 했는데 출력 초과가 떴다 그래서 검색 후 eof를 찾아보았다.
 // eof 는 종료명령을 의미합니다. 사용자가 eof를 입력하면 프로그램을 종료합니다.