#include <stdio.h>

int main(void)
{
    int m,n,c;

    printf("Enter an integer M: ");
    scanf("%d", &m);

    printf("Enter an integer N: ");
    scanf("%d", &n);
//use c and increment c by 1 everytime there is a number that is a multiple by 11
            if(n % 11 == 0)
            {
                printf("numbers between %d and %d are multiples of 11.",m,n );
            }

    return 0;

}
