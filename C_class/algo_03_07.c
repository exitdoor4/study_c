#include <stdio.h>
#include <stdlib.h>

struct data{
    double fnum;
    int num;
};
typedef struct data Node;

int main(void){
    // 포인터 : 대상 변수의 왼쪽을 받아온다.
    //        -> 오른쪽에 접근할 수 있는 별칭을 부여하는 과정
    // 동적할당 : 이름이 없는 공간을 선언한다.
    //        -> 이름을 수동으로 붙여야 하며, 이름에 종속되지 않음
    /*
     * 이름이 공간에 고정으로 부여되기 때문에...
     * 내용물을 바꿀 수 밖에 없고 비효율적이다. */
    /* 
    int* arr1 = (int*)malloc(sizeof(int)*5);
    int* arr2 = (int*)malloc(sizeof(int)*5);

    for(int i =0; i<5; i++){
        arr1[i] = i+1;
        arr2[i] = i+6;

    }
    // 동적할당과 포인터가 적용되면, 공간은 이름에 귀속되지 않는다.
    // 이름은 자유롭게 붙있을 수 있는 것이 된다.
    // 공간은 그 이름에 따라서 불려올 수 있게 된다.
    int* tmp = arr1;
    arr1 = arr2;
    arr2 = tmp;

    for(int i =0; i < 5; i++){
        printf("%d %d\n", arr1[i], arr2[i]);
    }
    free(arr1);
    free(arr2); */

    // 고정된 공간에서 값을 주고 받는다.
    // -> 값이 별로 없다면 효율적이다.
    // -> 하나짜리에 적합한 방식
    Node data1 = { 3.14, 100};
    Node data2 = { 4.24, 200};
    Node tmp = data1;
    data1 = data2;
    data2 = tmp;
    printf("(%.2f %d) (%.2f %d) \n",
         data1.fnum, data1.num, data2.fnum, data2.num);
    
    // 이름을 바꿔서 붙여준다.
    // -> 값이 많을 때 효율적이다.
    // -> 동적할당을 이용해 여러개의 값들을 하나로 만들어낸 것
    Node* pdata1=(Node*)malloc(sizeof(Node));
    Node* pdata2=(Node*)malloc(sizeof(Node));
    pdata1->fnum = 3.24; pdata1->num = 100;
    pdata2->fnum = 4.14; pdata2->num = 200;
    Node* ptmp = pdata1;
    pdata1 = pdata2;
    pdata2 = ptmp;
    printf("(%.2f %d) ( %.2f %d) \n", 
        pdata1->fnum, pdata1->num, pdata2->fnum, pdata2->num);
    free(pdata1);
    free(pdata2);
    return 0;
}