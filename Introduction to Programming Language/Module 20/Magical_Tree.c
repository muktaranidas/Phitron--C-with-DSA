#include <stdio.h>
void printChristmasTree(int n)
{
    int line = (n + 1) / 2 + 5;
    int star = 1;
    int space = line - 1;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    int baseSpace = ((line * 2) - 1 - n) / 2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < baseSpace; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    printChristmasTree(a);
    return 0;
}