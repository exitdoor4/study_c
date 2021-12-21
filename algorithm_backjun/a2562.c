#include <stdio.h>

int main(void) {
    int i, index,num[9];
    int a = 0;
    for(i=0;i<9;i++){
        scanf("%d", &num[i]);
        if (a<num[i])
        {a = num[i];
        index = i;}
    }
    printf("%d\n%d", a, index+1);
    return 0;
}