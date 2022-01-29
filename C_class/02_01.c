#include <stdio.h>

int main(void){
    
    void get_count(i, sta, end, result){
        for (int i = sta; i <= end; i++){
            result += i;
        }
    };
    int result = 0;
    int sta;
    int end;
    int i;
    printf("구간 합\n 시작, 끝 입력 >> ");
    scanf_s("%d%d", &sta, &end);
    sum_num(i, sta, end, result);
    printf("%d ~ %d 까지의 합 : %d\n", sta, end, result);

return 0;
}