#include <stdio.h>

int main() {
    int a[4] = {1, 2, 3, 4};
    int i, count = 0;

    for(i = 0; i < 4; i++) {
        if(a[i] % 2 == 0)
            count++;
    }

    printf("Even count: %d", count);

    return 0;
}