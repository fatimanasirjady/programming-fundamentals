#include <stdio.h>

int main() {
    int a[4] = {1, 2, 3, 4};
    int i, temp;

    
    temp = a[0];
    a[0] = a[3];
    a[3] = temp;

    temp = a[1];
    a[1] = a[2];
    a[2] = temp;
    for(i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}



