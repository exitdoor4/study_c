#include <stdio.h>


int main(void){
    // 삽입정렬 : 최초로 선택된 값을 올바른 위치에 배치시키는 정렬
    //          나머지 값들도 알아서 위치를 찾아가게 되는 정렬
    // 선택 + 버블 구조 실무에서 쓰인다.
    int arr[6] = {4,7,1,5,9,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int select = 1; select < size; select++){
        for (int index = select; index >0; index--) {
            if (arr[index] < arr[index-1]){
                int tmp = arr[index];
                arr[index] = arr[index-1];
                arr[index-1] = tmp;
            }
            else break;
            // 올라가는 방향일 경우, break가 있으면 제대로 작동안함.
            // 내려가는 방향이기 때문에 값을 재배치할 수 있다.
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    return 0;
}
