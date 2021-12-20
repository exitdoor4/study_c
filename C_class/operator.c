#include<stdio.h>

int main(){
    int a =2, b =3, c=4;
    int result1, mok, namugi;
    float result2;

    result1 = a + b - c;
    printf("%d + %d - %d= %d\n", a,b,c, result1);

    result1 = a + b * c;
    printf("%d + %d * %d= %d\n", a,b,c, result1);

    result2 = a * b / (float)c;
    printf("%d * %d /%d= %f\n", a,b,c, result2);

    mok = c/b;
    printf("%d / %d의 몫은 %d\n", c,b ,mok);

    namugi = c % b;
    printf("%d %% %d의 나머지는 %d\n", c,b , namugi);

    /*
    기본 산술연산자
    =(대입연산자), +, -, *, /, %(나머지값 연산자)
    대입 연산자와 증감 연산자
        대입 연산자 : =, +=, -=, *=, /=, %=
        증감 연산자 : ++, --
    */
   int a = 10;

   a++;
   printf(" a++ ==> %d\n", a); // a = a+1 과 동일

   a--;
   printf(" a-- ==> %d\n", a); // a = a-1 과 동일

   a += 5;
   printf(" a+= 5 ==> %d\n", a); // a = a+5 과 동일

   a -= 5;
   printf(" a-= 5 ==> %d\n", a); // a = a-5 과 동일

   a *= 5;
   printf(" a*= 5 ==> %d\n", a); // a = a*5 과 동일

   a /= 5;
   printf(" a/= 5 ==> %d\n", a); // a = a/5 과 동일

    int a= 10, b;

    b = a++;
    printf("%d\n", b); // b는 10 a는 11

    b = ++a; // b는 11 a는 12
    printf("%d\n", b);



}