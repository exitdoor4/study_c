#include <stdio.h>

int main(void) {
    int n,i,a;
    int min = 1000000;
    int max = -1000000;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if (max<a) max=a;
        if (min>a) min=a;    
    }
    printf("%d %d",min,max);
    return 0;
}