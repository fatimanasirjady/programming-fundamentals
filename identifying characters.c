#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character:");
	scanf("%c", &ch);
       ( ch>='A' && ch<='Z')?printf("Your character is an uppercase letter."):
		(ch>='a' && ch<='z')?printf("Your character is a lowercase letter."):
			(ch>='0' && ch<='9')?printf("Your character is a digit."):
				printf("Your character is a special character");
				return 0;
			
		
	}
