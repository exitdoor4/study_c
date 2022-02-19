#include <stdio.h>
#include <stdlib.h>

void pswap(double** fnum1, double** fnum2){
    double* tmp = *fnum1;
    *fnum1 = *fnum2;
    *fnum2 = tmp;
}

int main(void) {
    double* fnum1 = (double*)malloc(sizeof(double));
    double* fnum2 = (double*)malloc(sizeof(double));
    *fnum1 = 8.5;
    *fnum2 = 3.14;
    printf("%p %p\n", fnum1, fnum2);
    printf("전 : %.2f %.2f\n", *fnum1, *fnum2);

    // 두 포인터 변수가 가리키는 대상을 바꾸는 pswap함수를 정의하세요.

    pswap(&fnum1, &fnum2);

    printf("%p %p\n", fnum1, fnum2);
    printf("후 : %.2f %.2f\n", *fnum1, *fnum2);

    return 0;
}