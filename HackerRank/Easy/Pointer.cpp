#include <stdio.h>
#include <cstdlib>
#include <iostream>

void update(int *a,int *b) {
    // Complete this function   
    int x = *a;
    int y = *b;
    int z = *a;
    *a=x+y;
    *b = abs(y-z);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
