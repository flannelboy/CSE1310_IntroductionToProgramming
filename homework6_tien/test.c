#include <stdio.h>
#include <string.h>

int getTimes(void)
{
    int times = 0;
    printf("Enter number of times (must be > 0): ");
    scanf("%d", &times);
    while(times <=0)
    {
        printf("0 is <= 0, try again.");
        printf("Enter number of times (must be > 0): ");
        scanf("%d", &times);
    }
    return times;
}
void repeatLetters(char text, int times)
{
    for(int j = 0; j < strlen(text); j++)
    {
        for(int i = 0; i < times;i++)
        {
            printf("%s", *text);
        }
    }
}

int main(void)
{
    while (1)
    {
        printf("Enter a word or q to quit: ");
        char word[51];
        scanf("%50s", word);
        if (strcmp(word, "q") == 0)
            break;

        int times = getTimes();
        repeatLetters(word, times);
    }
    return 0;
}
