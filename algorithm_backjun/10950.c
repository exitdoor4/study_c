#include<stdio.h>

int main()
{
    int a, i=0;
    scanf("%d", &a);

    for(i = 1; i <10; i++)
    {
        printf("%d * %d = %d\n", a,i,a*i);
    }
    return 0;
}

// for’ loop initial declarations are only allowed in C99 or C11 mode
// 컴파일 에러가 떴다. 왜냐? for문에서 i 를 선언할 때 for문 안에서 선언이 안되기 떄문에 
// 따로 선언을 해줘야한다.GCC는 C99이 기본적으로 설정되어 제공되지 않기 때문이다.