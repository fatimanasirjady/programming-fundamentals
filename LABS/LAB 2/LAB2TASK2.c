#include<stdio.h>
int main()
{
    int age;
    int ID;// Where 1 is for yes and 0  is for no

    printf("Enter your age : ");
    scanf("%d",&age );
    
    if(age>=18){
        printf("Do you have ID : ");
        scanf("%d",&ID);

        if(age>=18 && ID==1){
            printf("You are eligible for voting");
        }else if(age>=18 && ID==0){
            printf("You meet the age requirment but cannot vote without ID");
        }
    }else
         printf("You are not eligible for voting");

         return 0;
}