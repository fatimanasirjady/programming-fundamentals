#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello";
    char destination[10];
    
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
    
    return 0;
}