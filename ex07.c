#include <stdio.h>
int main()
{
    int i;
    printf("i*5\t100 - ((i-1)*10+1)\ti\n");
    printf("__________________________________\n\n");

    for (i = 1; i <= 10; i++)
    {
        int column1 = i * 5;
        int column2 = 100 - ((i - 1) * 10 + 1);
        int column3 = i;

        printf("%d\t|\t%d\t|\t%d\n", column1, column2, column3);
    }

}
