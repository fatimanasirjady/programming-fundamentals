#include <stdio.h>

int main() {
    int a[4] = {1, 2, 3, 4};
    int i, first, second;

    first = second = a[0];

    for(i = 1; i < 4; i++) {
        if(a[i] > first) {
            second = first;
            first = a[i];
        }
        else if(a[i] > second) {
            second = a[i];
        }
    }

    printf("Two largest numbers: %d %d", second, first);

    return 0;
}