#include <stdio.h>

int main(void)
{
    int N;
    int i=0;
    int x=0;

    printf("Welcome to planet Numerion!");

    do
    {
        printf("\nEnter an integer N or -1 to quit: ");
        scanf("%d", &N);
        while(i<N)
        {
            if(N == i*i + i)
            {
                printf("%d is a holy number in Numerion, because %d = %d * %d + %d ", N, N, i,i,i);
                x=1;
            }
            i=i+1;
        }
    }while(N > 0);
    printf("EXITING... HAVE A GOOD DAY!");

    return 0;
}
