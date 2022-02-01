#include <stdio.h>
#include <stdlib.h>

typedef struct data {
    double f1;
    double f2;
}Node;

int main(void){
    // 실습.
    // 1. 위 구조체로 동적할당을 진행하여 구조체 변수 2개를 생성합니다.
    Node* pvar1 = (Node*)malloc(sizeof(Node));
    Node* pvar2 = (Node*)malloc(sizeof(Node));
    // 2. 생성된 구조체 변수에 값을 입력을 받아 저장합니다.
    pvar1->f1 = 1.00; pvar1->f2 = 2.00;
    pvar2->f1 = 3.00; pvar2->f2 = 4.00;
    // 3. 두 변수의 값을  바꿉니다.
    //      1) 두 구조체 변수의 f1끼리 바꿔서 출력합니다.
    
    //      2) 두 구조체의 공간을 서로 바꿔서 출력합니다.
    // ex) 첫번째에 1,2 / 두번째 3, 4 입력시
    // 3-1
    printf("전 : %.2f %.2f\n", pvar1->f1, pvar2->f1); // 전 : 1.00 3.00 
    int ptmp = pvar1->f1;
    pvar1->f1 = pvar2->f1;
    pvar2->f1 = ptmp;
    printf("후 : %.2f %.2f\n", pvar1->f1, pvar2->f1); // 전 : 3.00 1.00
    // 3-2
    printf("전 : (%.2f %.2f)\n", pvar1->f1, pvar1->f2);
    printf(" (%.2f %.2f)\n", pvar2->f1, pvar2->f2); 
    // 전 : (3.00 2.00) (1.00,4.00)
    Node ptmp1 = *pvar1;
    *pvar1 = *pvar2;
    *pvar2 = ptmp1;
    printf("후 : (%.2f %.2f)\n", pvar1->f1, pvar1->f2); 
    printf("   (%.2f %.2f)\n", pvar2->f1, pvar2->f2); 
    // 후 : (1.00 4.00) (2.00, 3.00)

    free(pvar1);
    free(pvar2);
    return 0;
}