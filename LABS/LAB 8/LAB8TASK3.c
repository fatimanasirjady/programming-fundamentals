#include <stdio.h>
 #include <string.h>
 int main(void)
{
    char source[] = "Hello";
    char destination[20];
    strcpy(destination, source);
    printf("Copied string: %s", destination);
 }