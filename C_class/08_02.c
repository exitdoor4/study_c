#include <stdio.h>
#include <string.h> //문자열 함수의 목록이 있는 string.h를 포함한다.

int main()
{
//     char ss[8] = "Basic-C";
//     int i;

//     ss[5] = '#';

//     for (i=0; i<8; i++)
//     {
//         printf("ss[%d] ==> %c\n", i, ss[i]);
//     }
//     printf("문자열 배열 ss ==> %s\n", ss);; // 배열 ss의 전체 문자열을 출력한다.

// char ss[5] ="abcd";
// char tt[5];
// int i;

// for (i = 0; i <4; i++)
// {
//     tt[i] = ss [3-i];
// }
// tt[4] = '\0'; // 마지막에 널 문자를 삽입한다.

// printf("거꾸로 출력한 결과 ==> %s\n", tt);

// char ss[] = "XYZ";
// int len;

// len = strlen(ss); // 문자열 길이을 알 수 있다.

// printf("문자열\"%s\" ==> %d \n" ,ss, len); // "를 출력하기 위해 \" 문자를 사용한다.
// 널문자를 제외한 문자의 개수 센다.

    char ss[4];

    strcpy(ss,"XYZ"); //copy를 활용할 때 사용한다.

    printf("문자열 ss의 내용 ==> %s\n", ss);
}