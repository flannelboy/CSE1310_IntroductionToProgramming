#include <stdio.h>
#include <string.h>

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
