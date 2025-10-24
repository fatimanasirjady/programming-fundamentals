#include<stdio.h>
int main()
{
    int age1;
    printf("Enter age of Sanam : ");
    scanf("%d",&age1);
    int age2;
    printf("\nEnter age of Fatima : ");
    scanf("%d",&age2);
    int age3;
    printf("\nEnter age of Daniya : ");
    scanf("%d",&age3);

    if(age1<age3 && age1<age2 ){
        printf("Sanam is youngest");
    }else if(age2<age3 && age2<age1 ){
        printf("Fatima is youngest");
    }else if(age3<age2 && age3<age1 ){
        printf("Daniya is youngest");
    }
        return 0;}