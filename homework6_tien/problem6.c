#include <stdio.h>
#include <string.h>

int main()
{
    char word[51];
    printf("Enter a word or q to quit: ");
    scanf("%50s", word);

    while (strcmp(word, "q") != 0 && strcmp(word, "Q") != 0)
    {
        char c = mostFrequentCharacter(word);
        int count = countOccurrences(word, c);
        printf("Most frequent character: %c\n", c);
        printf("Number of occurrences of %c: %d\n\n", c, count);

        printf("Enter a word or q to quit: ");
        scanf("%50s", word);
    }
    return 0;
}
