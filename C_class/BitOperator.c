#include<stdio.h>

int main(){
//     printf("10 & 7 = %d\n", 10&7);
//     printf("123 & 456 = %d\n", 123&456);
//     printf("0xffff & 0000 = %d\n", 0xffff&0000);
 
/*
비트 연산자
비트 연산자는 정수나 문자 등을 2진수로 변환한 후에 각 자리의 비트끼리 연산수행
비트 연산자의 종류
&(비트논리곱 : 둘다 1이면 1), |(비트 논리합 : 둘 중에 하나만 1이면 1), ^(비트 베타적논리합: 돌이 같으면 0, 다르면1), ~(비트부정 : 1은 0, 0은 1)
<<(비트 왼쪽 시프트),>>(비트 오른쪽 시프트)
*/

    // printf("10 | 7 = %d\n", 10|7); //15
    // printf("123 | 456 = %d\n", 123|456); //507
    // printf("0xffff | 0000 = %d\n", 0xffff|0000);// 65535

    // printf("10 ^ 7 = %d\n", 10^7); //13
    // printf("123 ^ 456 = %d\n", 123^456); //435
    // printf("0xffff ^ 0000 = %d\n", 0xffff^0000);//65535

    // char a = 'A', b, c;
    // char mask = 0x0f;

    // printf("%x & %x = %x\n", a, mask, a&mask);
    // printf("%x | %x = %x\n", a, mask, a|mask);

    // mask = 'a' - 'A' ; // 'a' 와  'A'의 차이는 32이다
 
    // b = a ^ mask; // 배타적 논리곱
    // printf("%c ^ %d = %c\n", a, mask, b);

    // a = b ^ mask;
    // printf("%c ^ %d = %c\n", b, mask, a);

    // // 2의 보수(음수) = 1의 보수 + 1 => 양수의 수를 음수로 구할 때 사용
    // int a = 12345;
    // printf("%d\n", ~a +1); 

    // int a = 10;
    // printf("%d를 왼쪽 1회 시프트하면 %d이다.\n", a, a <<1);
    // printf("%d를 왼쪽 2회 시프트하면 %d이다.\n", a, a <<2);
    // printf("%d를 왼쪽 3회 시프트하면 %d이다.\n", a, a <<3);
        /*
        비트 왼쪽 시프트(<<) 연산자
            나열된 비트를 왼쪽으로 시프트 하는 연산자
            왼쪽 시프트를 할 때마다 2n을 곱한 효과
            왼쪽 시프트를 할 때마다 2의 n승을 곱한 효과
        */

    int a = 10;
    printf("%d를 오른쪽 1회 시프트하면 %d이다.\n", a, a>> 1);
    printf("%d를 오른쪽 2회 시프트하면 %d이다.\n", a, a>> 2);
    printf("%d를 오른쪽 3회 시프트하면 %d이다.\n", a, a>> 3);
    printf("%d를 오른쪽 4회 시프트하면 %d이다.\n", a, a>> 4);

    // 비트 오른쪽 시프트 (>>) 연산자 2의 n승을 나눈 몫의 효과
}