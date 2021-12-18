#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // int a = 100, b = 200;
    // float result;

    // result = a/(float)b; // 나누는 값을 실수로 해야 실수로 
    //                     //형변환할려면 (형)b; 이런식으로 하면 가능

    // printf("%f", result);
    // // 정수/정수 = 정수
    // // 정수/실수 = 실수

    // float a = 0.12312312312312312344; //소수점 아래 스물다섯자리 실수를 입력해도 소수점뒤에 일곱자리가 최대
    // double b = 0.234464564564576723f; // 소수점 미만 17자리 까지 제대로 출력

    // printf("%30.25f \n", a); // float = > f
    // printf("%30.25lf \n", b); // double = > lf


    // 아스키 코드 
    // char a, b, c; // char (1byte)
    // 0 -> 48, A -> 65, a -> 97
    // a = 'A'; // 여기에서는 ""는 사용안되고 '만 사용가능하다.

    // printf("%c \n", a); //문자형 출력
    // printf("%d \n", a); //정수형 출력

    // b= 'a';
    // printf("%c \n", b);
    // printf("%d \n", b);

    // c= 90;
    // printf("%c \n", c);
    // printf("%d \n", c);

//      int a, b;
//     char c, d;

//     a = 0x41; // 16진수 41
//     b = 0x50;

//     printf("%c \n", b); //정수형 b를 문자형으로 출력

//     c=a;
//     printf("%c \n", c); //문자형 변수 c에 정수형 a 값을 대입한다

//     d = '#';
//     printf("%c의 ascii 값은 %d입니다\n", d, d); 
    // char str1[10];
    // char str2[10];
    // char str3[10] = "CookBook";

    // strcpy(str1, "Basic-C");
    // strcpy(str2, str3);

    // printf("str1 ==> %s\n", str1);
    // printf("str2 ==> %s\n", str2);
    // printf("str3 ==> %s\n", str3);

    //     char str[10] = "012345678"; 

    //     printf("str => %s\n", str);

    //     str[0] = 'I';
    //     str[1] = 'T';
    //     str[2] = 'C';
    //     str[3] = 'o';
    //     str[4] = 'o';
    //     str[5] = 'k';
    //     str[6] = '\0';

    // printf("str ==> %s\n", str);
    // printf("str[7] ==> %c\n", str[7]);
    // printf("str[50] ==> %c\n", str[50]);

    // 정수를 하나 입력 받아 10진수, 16진수, 8진수로 출력하는 프로그램
    int a;
    
    printf("정수를 입력하세요 ==> ");
    scanf("%d",&a);

    printf("10진수 ==> %d\n", a);
    printf("16진수 ==> %x\n", a);
    printf("8진수 ==> %o\n", a);
  

}
