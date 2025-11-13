#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50] = "Fatima";
    char lastName[50] = "Nasir";
    char fullName[100];

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Full Name: %s\n", fullName);

    return 0;
}
