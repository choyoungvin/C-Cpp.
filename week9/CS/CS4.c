#include <stdio.h>

int main() {
    int h;
    int w;
    
    scanf("%d %d",&h,&w);

    int a = w + 100 - h;
    printf("%d", a);

    if (a>0) {
        printf("\nObesity\nNeed control");
    }
    return 0;
}