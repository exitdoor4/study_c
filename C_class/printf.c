#include<stdio.h>

int main(){
// printf 의 함수에 대해서 알아볼려고 한다.
/* 대표적인 서식의 종류
 &d &x(16진수) %o(8진수)
 %f(소숫점이하 6자리 실수) %lf(소숫점이하 14자리 실수)
 %c(한글자)
 %s(문자열) --> %10s 같은 경우는 무조건 10자리를 채운다.
*/

printf("%d / %d = %f \n", 100, 200, 0.5);
printf("%s %s \n", "a", "k");
printf("%s %s \n", "안녕", "c언어");

printf("%5d \n", 123); //앞에 두칸을 비운 사실을 알 수있다.
printf("%05d \n", 123); // 앞에 0으로 채둔다.

printf("%f \n", 123.45); //소수점 이하 6자리를 설치 
printf("%7.1f \n", 123.45);// 소수점 포함 7자리 소수점 이하는 1자리
printf("%7.3f \n", 123.45);// 소수점 이하 3자리

printf("%s \n", "안녕하세여");
printf("%10s \n", "base"); //한글은 안되고 영어만 가능


// 탈출문자 (\)
printf("\n 줄 바뀜\n연습\n");
printf("\t탭키\t연습\n");
printf("이것을 \r 덮어씁니다 \n");
printf("\a\a\a 삐소리 3번 \n");
printf("글자가 \"강조\"되는 효과 \n");
printf("\\\\\\역슬래시 세개 출력\n"); //역슬래시(\)하나를 출력할려면 \를 두번 입력해야 한다. 


float a = 123.45;
int b = 200;
printf("a의 값 ==> %5.2f \n", a); // . 은 자리수를 차지 하지않는다
printf("b의 값 ==> %d \n", b);

/* 이론수업
 8bit = 1byte
 11111111 => FF
 2진수를 10진수로 변환하는 방법
 => 2진수의 맨 뒤에서부터 각 자리에 해당하는 가중티인 2의0승 2의1승...을 곱한 후
 각 자리의 수를 더한다.
10010011 = > 147
16진수를 2진수로 변환할려곡 하면 하나씩 끊어서 16bit로 만들면 된다.
아스키 코드 0 - 48, A - 65, a -97 알아두면 편하다
문자열은 문자배열을 사용
return 0;
*/
}
