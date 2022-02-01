#include <stdio.h>

int main(void){
    // 선택정렬 : 선택된 곳에 올바른 값이 배치가 되는 정렬
    //          임의 선택이 아닌 첫번쨰부터 선택하여 진행한다.
    // 최대값/최소값을 찾아서, 해당 변수에 배치하는 방식
    int arr[6] = {4, 7, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int j = 0; j <= size -2; j++)
        for (int i = j+1; i < size; i++){
            if(arr[j] > arr[i]){
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    return 0;
}