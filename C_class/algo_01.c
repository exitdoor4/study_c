#include <stdio.h>

// 함수로 만들 코드를 포장할 때에는 언제나 자료형, 매개변수는 void로 시작한다.
// 함수의 자료형이 왜 void인가?
// -> 이 함수가 만들어내는 결과물을 외부에서 쓸거면, 이를 돌려주기 위한 것
// -> 만들어지는 값의 종류를 식별하기 위한 것
// 매개변수 왜 void 인가?
// -> 함수 외부로부터 값을 전달받아, 이를 이용해 초기화되는 변수이다.
// -> 전달받을 값을 정해놓은 것이 없는데 왜 있어야 하는가?

// 4. 매개변수와 함수의 자료형을 설정한다.
// 1) 값을 불러오는 변수가 있다. -> 매개변수로 준비시킨다.
// 2) 값을 저장하는 변수가 있다 -> 함수 내부에서 선언하여 준비한다.
// 3) 해당 구간 밑에서 변수의 사용을 확인한다. -> return과 함께 함수의 자료형을 설정한다.


    // 1형식 : 처리(가공) 구간을 함수로 만들었을 때 자주 보이는 유형
int get_sum(int num) {
    int abs_num = (num < 0) ? -num : num; // 절댓값 만드는 과정 
    int result = 0;
    for (int i = 0; i <= abs_num; i++){
        result += i;
    }
    if (num <0) {
        result *= -1;
    }
    return result;
}
    // 2형식 : 결과(출력) 구간을 함수로 만들었을 때 자주 보이는 유형
    // 주의사항 : 너무 짧으면 포장하는 의미가 없다.
    // 주로, 출력쪽에 분리해서 취급할 수 없는 처리구간이 함께 붙어 있으면...
    // 이를 하나로 묶어서 정리하는 용도로 쓰는 경우가 많다.

void show(int result, int mod){
    printf("결과 : %d\n", result);
    // 조건문, 반복문 등이 함께 포함되어 있을 경우 포장하여 사용한다.
    if (result % mod == 0) {
        printf("구한 합은 %d의 배수입니다.", mod);
    }
    // 상수가 바뀔 수 있는지 확인하고...
    // 매개변수를 이용해 바뀔 수 있도록 변수로 변환한다.
    // 독립성에 문제가 생긴다. + 재사용도 문제가 생긴다.
}
     // 3형식 : 외부로부터 값을 전달받지 않고, 준비 구간을 정리하는 용도로 사용되는 함수
     // 4형식 : 외부와 완전히 고립된 함수. 정리용. 앞뒤와 연관성이 전혀 없는 구간을 분리하는 용도
void main_program1(void){ 
    // 준비
    int num, result;
    // 입력 
    printf("정수 입력 >>");
    scanf("%d", &num);
    // 처리
    result = get_sum(num); // 값을 입력시킨다 // 베스트는, 준비해서 출력한다.
    // 결과
    show(result, 2);
    }
int main(void) {
    main_program1();
    return 0;
}