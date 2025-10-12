#include<stdio.h>
int main()
{
int choice,category;
printf("Select your department.\n");
printf("1. Computer Science\n");
printf("2.Electrical Engineering\n");
printf("Enter your choice(1/2)\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("You chose Computer Science.\n");
		printf("Select your year of study:\n");
		printf("1. First Year\n");
            printf("2. Second Year\n");
            printf("Enter your choice: ");
            scanf("%d", &category);

            switch (category) {
                case 1:
                    printf("You selected First Year - Computer Science.\n");
                    printf("Courses:\n");
                    printf("1. Programming Fundamentals\n");
                    printf("2. Applied Physics\n");
                    break;

                case 2:
                    printf("You selected Second Year - Computer Science.\n");
                    printf("Courses:\n");
                    printf("1. Data Structures\n");
                    printf("2. Computer Architecture\n");
                    break;

                default:
                    printf("Invalid year for Computer Science.\n");
            }
            break;

        case 2:
            printf("\nYou chose Electrical Engineering.\n");
            printf("Select your year of study:\n");
            printf("1. First Year\n");
            printf("2. Second Year\n");
            printf("Enter your choice: ");
            scanf("%d", &category);

            switch (category) {
                case 1:
                    printf("You selected First Year - Electrical Engineering.\n");
                    printf("Courses:\n");
                    printf("1. Basic Electronics\n");
                    printf("2. Circuit Analysis\n");
                    break;

                case 2:
                    printf("You selected Second Year - Electrical Engineering.\n");
                    printf("Courses:\n");
                    printf("1. Power Systems\n");
                    printf("2. Control Systems\n");
                    break;

                default:
                    printf("Invalid year for Electrical Engineering.\n");
            }
            break;

        default:
            printf("Invalid department choice!\n");
    }

    return 0;

}

