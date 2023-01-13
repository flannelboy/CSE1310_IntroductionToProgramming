#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fin=fopen("filetest.txt", "r+");
    if(fin == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    else
    {
        printf("FILE OPEN!\n");
    }

    int row=0;
    int column=0;
    char printContent[50] = {};

    for (int i = 0; i < 3; i++)
    {
        fgets(printContent, 49, fin);
        printf("%s", printContent);
    }
    fclose(fin);
    return 0;
}
