#include <stdio.h>
#include<string.h>

int main(void)
{
    double num[4]= {0,0,0,0};
    int i = 0;
    printf("Enter the first number: ");
        scanf("%lf", &num[0]);
    printf("Enter the second number: ");
        scanf("%lf", &num[1]);
    printf("Enter the third number: ");
        scanf("%lf", &num[2]);
    printf("Enter the fourth number: ");
        scanf("%lf", &num[3]);

    printf("Array: [%lf, %lf, %lf, %lf]\n", num[0],num[1],num[2],num[3]);

    printf("Menu:\n");
    printf("1: Change a number \n");
    printf("2: Print a number \n");
    printf("3: Swap array positions \n");
    printf("\nEnter your choice: ");
    scanf("%d", &i);

    if(i == 1)
    {
        int pos = 0;
        double topos = 0;
        printf("Which position do you want to change (0, 1, 2, 3)? ");
            scanf("%d", &pos);
        switch(pos)
        {
        case 0:
            
            printf("To what number do you want to change position 0? ");
                scanf("%lf", &topos);
            num[0] = topos;
            break;
        case 1:
            printf("To what number do you want to change position 0? ");
                scanf("%lf", &topos);
            num[1] = topos;
            break;
        case 2:
            printf("To what number do you want to change position 0? ");
                scanf("%lf", &topos);
            num[2] = topos;
            break;
        case 3:
            printf("To what number do you want to change position 0? ");
                scanf("%lf", &topos);
            num[3] = topos;
            break;
        default:
            printf("\nInvalid position.");
        }
        printf("\nArray: [%lf, %lf, %lf, %lf]", num[0],num[1],num[2],num[3]);
    }
    else if(i == 2)
    {
        int pos = 0;

        printf("Which position would you like to print (0, 1, 2, 3)? ");
            scanf("%d", &pos);
        switch(pos)
        {
        case 0:
            printf("Value at index %d: %lf", pos, num[0]);
            break;
        case 1:
            printf("Value at index %d: %lf", pos, num[1]);
            break;
        case 2:
            printf("Value at index %d: %lf", pos, num[2]);
            break;
        case 3:
            printf("Value at index %d: %lf", pos, num[3]);
            break;
        default:
            printf("\nInvalid position.");
        }
        printf("\nArray: [%lf, %lf, %lf, %lf]", num[0],num[1],num[2],num[3]);
    }
    else if(i == 3)
    {
        char input[3] = {0,0,0};
        


        printf("List the positions you want to swap separated by a space (e.g. 0 3): ");
            scanf("%c", input);
        int pos1 = input[0];
        int pos2 = input[2];
        
        switch(pos1)
        {
        case 0:
            if(pos)
            num[0] = num[pos2];
            printf("%lf to %lf", num[0], num[pos2]);

            break;
        case 1:
            num[0] = num[pos2];

            break;
        case 2:
            num[0] = num[pos2];
            break;
        case 3:
            num[0] = num[pos2];
            break;
        default:
            printf("\nInvalid input.");
        }
        printf("\nArray: [%lf, %lf, %lf, %lf]", num[0],num[1],num[2],num[3]);
    }
    else
    {
        printf("\nInvalid menu choice.");
    }








    return 0;
}
