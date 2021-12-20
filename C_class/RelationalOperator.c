#include <stdio.h>

int main(){
    int a = 100, b = 200;

    printf("%d == %d는 %d이다.\n", a, b, a == b);
    printf("%d == %d는 %d이다.\n", a, b, a != b);
    printf("%d > %d는 %d이다.\n", a, b, a > b);
    printf("%d < %d는 %d이다.\n", a, b, a < b);
    printf("%d >= %d는 %d이다.\n", a, b, a >= b);
    printf("%d <= %d는 %d이다.\n", a, b, a <= b);
    printf("%d = %d는 %d이다.\n", a, b, a = b); // 관계 연산자가 아닌 대입 연산자를 사용했다.
    
    // /*
    // 관계 연산자의 기본 개념
    //     관계 연산자(또는 비교 연산자)는 어떤 것이 큰지, 작은지, 같은지 비교하는 것
    //     결과는 참(True, 1)이나 거짓(False,0)
    //     주로 조건문이나 반복문에 사용, 단독으로 쓰이지 않음.
    // */
   int a = 99;

   printf("AND연산 : %d\n", (a>=100) && (a <= 200));
   printf("OR연산 : %d\n", (a>=100) || (a <= 200));
   printf("NOT연산 : %d\n", !(a == 100));

/* 논리 연산자의 기본 개념
    여러 조건을 복합하여 사용
    &&(그리고), ||(또는), !(부정)
*/

    int a = 100, b = 200; // -도 0이다.
    
    printf("상수의 AND연산: %d\n",a&&b); //논리 연산자를 따질 때에는 0과 1을 따질 수 밖에 없다. 0 제외한 모든 숫자는 1이다.
    printf("상수의 OR연산: %d\n",a||b); 
    printf("상수의 NOT연산: %d\n",!a); 





}