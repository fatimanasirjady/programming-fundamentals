#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Programming";
    char destination[5]; 
    
    strncpy(destination, source, 4);
    destination[4] = '\0'; 
    
    printf("Copied string: %s\n", destination);
    return 0;
}