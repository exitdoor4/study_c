#include<stdio.h>

 // 10시 10분 일경우 -45 9시 25분 
int main(void){ //
    int H,M;
    scanf("%d %d", &H, &M);
if (M<45 && H!=0)
    printf("%d %d",H-1, M+15);
else if(M<45 && H==0)
    printf("%d %d",H=23, M+15);
else
    printf("%d %d",H, M-45);

return 0;
}

