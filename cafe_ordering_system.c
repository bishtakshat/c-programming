#include <stdio.h>

int main()
{

    int choice;

    printf("======= CAFE MENU =======\n"
           "1 Burger   - Rs 120\n"
           "2 Pizza   - Rs 200\n"
           "3 Sandwich   - Rs 80\n"
           "4 Coffee   - Rs 60\n"
           "5 Exit\n");

    printf("Enter Your Choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You Selected : Burger\n");
        printf("Price: Rs. 120\n");
        break;
    case 2:
        printf("You Selected : Pizza\n");
        printf("Price: Rs. 200\n");
        break;
    case 3:
        printf("You Selected : Sandwich\n");
        printf("Price: Rs. 80\n");
        break;
    case 4:
        printf("You Selected : Coffee\n");
        printf("Price: Rs. 60\n");
        break;
    case 5:
    printf("Thank you for visiting!\n");
    break;

    default:
    printf("Invalid Choice!\n");
    }

    return 0;
}