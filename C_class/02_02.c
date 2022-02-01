#include <stdio.h>
int main(void){

    // void num_print() {
    //     printf("양수 정수 입력 >>");
    // }
    // void count_print(int count) {
    //     printf("%d", count)
    // };
    // int count = 0;
    // while (count <= 0) {
    //     num_print();
    //     scanf("%d", &count);
    // }
    // while (count > 0){
    //     count_print(count);
    //     count--;
    // }

    void show_number(sta,end,num){
        int sta,end,num,i;
        for(i=0;i<=num;i++){
            sta += num;
            printf("%d",sta)
        };
    }
    show_number(10,-1,5);

    return 0;
}