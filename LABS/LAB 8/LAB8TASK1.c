#include <stdio.h>
 #include <string.h>
 int main(void) 
 {
    char a[20] = "Good";
    char b[] = " Morning";
    strcat(a,b);
    printf("Result: %s", a);
 }