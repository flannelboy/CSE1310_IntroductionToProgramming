#include <stdio.h>
#define ROW 5
#define COL 3

double columnAverages(double mtx[ROW][COL])
{

}
double rowAverages(double mtx[ROW][COL])
{

}
double regionAverages(double mtx[ROW][COL],int left, int right, int bot, int top)
{
    double regionSum = 0;
    double time = 0;
    for(int r = top; r <= bot; r++)
    {
        for(int c = left; c <= right; c++)
        {
            regionSum = regionSum + mtx[r][c];
            time++;
        }
    }
    return regionSum / time;
}
void generateMtx(double mtx[ROW][COL])
{
    double value = 0;

    for (int r = 0; r < ROW; r++)
    {
        for (int c = 0; c < COL; c++)
        {
            printf("Enter row %d, column %d: ", r,c);
            scanf("%lf", &value);
            mtx [r][c] = value;
        }
    }

    return mtx;
}
void printMtx(double mtx[ROW][COL])
{
    printf("        Col 0   Col 1   Col 2");
    for(int r = 0; r < ROW; r++)
    {
        printf("\nRow %d", r);
        for(int c = 0; c < COL; c++)
        {
            printf("%8.1lf", mtx[r][c]);
        }


    }
}
int main()
{

    double mtx[ROW][COL]={};
    generateMtx(mtx);
    printMtx(mtx);

    int left, right, bot, top;
    printf("\nEnter top region boundary: ");
        scanf("%d", &top);
    printf("Enter bottom region boundary: ");
        scanf("%d", &bot);
    printf("Enter left region boundary: ");
        scanf("%d", &left);
    printf("Enter right region boundary: ");
        scanf("%d", &right);

    double rAvg = regionAverages(mtx, left, right, bot, top);
    printf("Region average: %.1lf", rAvg);
}
